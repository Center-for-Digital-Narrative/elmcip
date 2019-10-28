#!/bin/bash

set +x

HOMEDIR=${PWD}
DRUPAL=drupal
DB_DIR=/elmcip
DB_DUMP=latest.elmcip.sql
source bin/drush.sh

if [ $# -eq 0 ]
then
    echo "Error: Valid parameter: stage_branch normal|reset"
    exit 1
fi

if [ "$1" = "reset" ]
then
    date +'%Y-%m-%d %H:%M'
    drush --version || exit 1
    echo "Tear down site and upgrade from database snapshot."

    if [ ! -d $DB_DIR ]
    then
        echo "Error: Database snapshot directory: $DB_DIR does not exists"
        exit 1
    fi

    cd $DRUPAL || exit
    /elmcip/create_snapshot

    ## Empty database and re-populate from production snapshot.
    if [ ! -f "${DB_DIR}/${DB_DUMP}.gz" ]
    then
        echo "Error: Database snapshot: $DB_DIR/$DB_DUMP do not exists"
        exit 1
    fi
    drush sql-drop --yes || exit
    gunzip -c "${DB_DIR}/${DB_DUMP}.gz" | drush sql-cli

    ## Enable us to load file and images on demand into staging area from prod.
    drush pm-enable --yes stage_file_proxy
    drush variable-set stage_file_proxy_origin "https://elmcip.net"
    drush dis captcha --yes
    drush pmu recaptcha --yes
    drush pmu captcha --yes

    ## Password protect site. Stop content from getting picked up by spider bots.
    cat /elmcip/applications/htaccess.txt >> .htaccess
    cd "${HOMEDIR}" || exit 1
    exit 0
elif [ "$1" = "normal" ]
then
    if ! bin/branch_changed.sh
    then
      exit 0
    fi

    date +'%Y-%m-%d %H:%M'
    drush --version || exit 1
    echo "Upgrading site to latest development version."

    git submodule foreach git reset --hard || exit 1
    bin/site-upgrade master
    cd $DRUPAL || exit 1
    drush status
    drush dis captcha --yes
    drush pmu recaptcha --yes
    drush pmu captcha --yes
else
    echo echo "Error: Valid parameter: stage_branch normal|reset"
    exit 1
fi
