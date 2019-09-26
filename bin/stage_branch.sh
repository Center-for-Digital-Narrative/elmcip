#!/bin/bash

# set -x

HOMEDIR=${PWD}
DRUPAL=drupal
alias drush="${HOMEDIR}/vendor/drush/drush/drush"

bin/branch_changed.sh

if [ $? -eq 0 ]
then
    echo "Do something"
    drush --version || exit

    ## Create db. snapshot
    cd $DRUPAL || exit
    drush sql-dump --result-file=/elmcip/latest.elmcip.sql --gzip

    ## Remove db content and re-populate from production
    drush sql-drop --yes
    gunzip -c /elmcip/latest.elmcip.sql | /elmcip/applications/elmcip.net/vendor/drush/drush/drush sql-cli

    ## Reset application
    cd $HOMEDIR
    git reset --hard
    bin/site-upgrade master

else
    echo "Nothing to do"
fi
