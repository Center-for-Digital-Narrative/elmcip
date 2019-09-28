#!/bin/bash

# set -x

HOMEDIR=${PWD}
DRUPAL=drupal
DB_DIR=/elmcip
alias drush="${HOMEDIR}/vendor/drush/drush/drush"

if [ $# -eq 0 ]
then
    echo "Error: Valid parameter: stage_branch normal|reset"
    exit 1
fi

date
bin/branch_changed.sh

if [ $? -eq 0 ]
then
    drush --version || exit

    if [ $1 = "reset" ]
    then
        echo "Tear down site and upgrade from database snapshot"

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
        cd $HOMEDIR || exit

    elif [ $1 = "normal" ]
    then
        echo "Upgrading site to latest development version"
        ## Upgrade application
        git reset --hard
        bin/site-upgrade master
    else
        echo echo "Error: Valid parameter: stage_branch normal|reset"
        exit 1
    fi
else
    echo "Nothing to do"
fi
