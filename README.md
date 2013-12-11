# ELMCIP Knowledge Base

This document describe how to get a local copy of these Drupal based project working locally.

## Requirements

* A working *AMP installation (Apache, MySQL/Mariadb and PHP 5.4/5.5)
* Empty database named 'elmcip'.
* Database user name 'elmcip'.
* Password 'elmcip'.

## Installation

Get main repository and custom modules

    git clone git@github.com:elmcip/elmcip.git

Get the drupal installation that is added as a git submodule

    git submodule update --init

## Usage

Always make sure you are using the latest version of elmcip.net.

    git pull --rebase

Get latest version of committed changes to the Drupal and 3-part modules.

    git submodule update
    cd drupal
    drush updatedb

## Contribute

## Troubleshooting

If your unable to restore the full database your mysql/mariadb resource settings my be to low to restore larger databases. Try upping this to:

     max_allowed_packet = 100M

in your my.cnf or server.cnf.
