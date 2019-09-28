#!/bin/bash

# set -x

HOMEDIR=${PWD}
DRUPAL=drupal
DB_DIR=/elmcip
alias drush="${HOMEDIR}/vendor/drush/drush/drush"

bin/branch_changed.sh


if [ $? -eq 0 ]
then
    echo "Upgrading site"
    date

    # Test if $DB_DIR exist and exit if not.
    if [ ! -d $DB_DIR ]
    then
        echo "Error: Database snapshot directory: $DB_DIR does not exists"
        exit 1
    fi

    ## Create db. snapshot
    drush --version || exit
    cd $DRUPAL || exit
    drush sql-dump --result-file="${DB_DIR}/latest.elmcip.sql" --gzip

    ## Remove db content and re-populate from production

    ## Before check that we created new DB snapshot.
    if [ ! -f "${DB_DIR}/elmcip/latest.elmcip.sql" ]
    then
        echo "Error: Database snapshot: $DB_DIR/elmcip/latest.elmcip.sql do not exists"
        exit 1
    fi

    drush sql-drop || exit
    gunzip -c /elmcip/latest.elmcip.sql | /elmcip/applications/elmcip.net/vendor/drush/drush/drush sql-cli

    ## Reset application
    cd $HOMEDIR || exit
    git reset --hard
    bin/site-upgrade master

else
    echo "Nothing to do"
fi
