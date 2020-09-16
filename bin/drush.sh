#!/bin/bash

HOMEDIR=${PWD}

drush() {
    "${HOMEDIR}"/vendor/bin/drush "$@"
}
