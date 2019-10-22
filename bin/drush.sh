#!/bin/bash

HOMEDIR=${PWD}
DRUSH_PHP=/usr/bin/php

drush() {
    ${HOMEDIR}/vendor/drush/drush/drush "$@"
}
