#!/bin/bash

HOMEDIR=${PWD}

drush() {
    ${HOMEDIR}/vendor/drush/drush/drush "$@"
}
