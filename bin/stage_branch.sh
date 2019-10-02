#!/bin/bash

set +x

HOMEDIR=${PWD}
DRUPAL=drupal
DB_DIR=/elmcip
source bin/drush.sh

if [ $# -eq 0 ]
then
    echo "Error: Valid parameter: stage_branch normal|reset"
    exit 1
fi

drush --version || exit 1

if [ "$1" = "reset" ]
then
    date
    echo "Tear down site and upgrade from database snapshot."

    # Test if $DB_DIR exists
    if [ ! -d $DB_DIR ]
    then
        echo "Error: Database snapshot directory: $DB_DIR does not exists"
        exit 1
    fi

    ## Create db. snapshot
    cd $DRUPAL || exit
    drush sql-dump --result-file="${DB_DIR}/latest.elmcip.sql" --gzip || exit

    ## Empty database and re-populate from production snapshot
    if [ ! -f "${DB_DIR}/elmcip/latest.elmcip.sql" ]
    then
        echo "Error: Database snapshot: $DB_DIR/elmcip/latest.elmcip.sql do not exists"
        exit 1
    fi

    drush sql-drop || exit
    gunzip -c /elmcip/latest.elmcip.sql | /elmcip/applications/elmcip.net/vendor/drush/drush/drush sql-cli

    ## Enable us to load file and images on demand into staging area from prod.
    drush pm-enable --yes stage_file_proxy
    drush variable-set stage_file_proxy_origin "https://elmcip.net"

    ## Password protect site. Stop content from getting picked up by spider bots.
    cat /elmcip/applications/htaccess.txt >> .htaccess
    cd "$HOMEDIR" || exit 1

elif [ "$1" = "normal" ]
then
    if ! bin/branch_changed.sh
    then
      exit 1
    fi

    date
    echo "Upgrading site to latest development version."

    git submodule foreach git reset --hard || exit 1
    bin/site-upgrade master
else
    echo echo "Error: Valid parameter: stage_branch normal|reset"
    exit 1
fi
