#!/bin/bash

set -x

DRUPAL=drupal
HOMEDIR=${PWD}
source bin/drush.sh

drush --version || exit 1

## Pull any updates from select branch before running upgrades.

if [[ -z "$1" ]]; then
  git checkout master
  git pull --rebase
else
  git pull --rebase
  git checkout "$1" || exit 1
fi

git submodule update --quiet || exit 1

## Flush all drupal caches and revert all feature modules.
cd "${HOMEDIR}"/${DRUPAL} || exit 1
drush --uri=cellproject.local cc all
drush --uri=cellproject.local  updatedb --yes
drush --uri=cellproject.local cc all
