#!/usr/bin/env bash

set -x

DRUPAL=drupal
URI=elmcip.local
HOMEDIR=${PWD}

cd ${HOMEDIR}/${DRUPAL} || exit
drush sql-drop --yes
gunzip -c ../site/latest.elmcip.sql.gz | drush sql-cli

drush updatedb --yes
drush features-revert-all --yes
drush fl
drush uli -l $URI
drush en --yes development_settings
drush cc all
