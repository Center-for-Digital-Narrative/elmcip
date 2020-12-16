#!/bin/bash

# Off-line reset local env. to production.
#
# Reset you local installation from your latest downloaded
# database snapshot. Does no attempt to pull data from external systems.

#set -x

source bin/drush.sh
DRUPAL=drupal
URI=cellproject.local
DB=../site/latest.cellproject.sql.gz
DB_DECOMPRESSED=../site/latest.cellproject.sql

drush --version || exit $?

git checkout production --quiet || exit $?
git submodule update --quiet || exit $?

cd ${DRUPAL} || exit

# Drop all data and populate database with the latest backup.
#
if [[ -z "$1" ]]; then

  if [ ! -f $DB ]; then
    echo "Error. Database file $DB not found. Giving up."
    exit 1
  fi

  echo "Running normal mode. Removing existing db tables."
  drush --uri=${URI} sql-drop --yes
  echo "Populating database with new data."
  gunzip -c $DB | drush --uri=${URI} sql-cli
else

  if [ ! -f $DB_DECOMPRESSED ]; then
    echo "Error. Database file $DB_DECOMPRESSED not found. Giving up."
    exit 1
  fi

  echo "Running fast mode. Removing existing db tables."
  drush --uri=${URI} sql-drop --yes
  echo "Populating database with new data."
  drush --uri=${URI} sql-cli < $DB_DECOMPRESSED
fi

# Flush all drupal caches.
drush --uri=${URI} cc all -v
drush --uri=${URI} status
