# ELMCIP Knowledge Base

This document describe how to get a local copy of these Drupal based project working locally.

## Requirements

* A working installation of Apache, MySQL/Mariadb and PHP 5.4/5.5.
* Create a empty database named 'elmcip'.
* Database user name 'elmcip' with full access to the elmcip database.
* Set password for user elmcip to 'elmcip'.

## Installation

Get main repository and our custom modules:

    git clone git@github.com:elmcip/elmcip.git

Get drupal core and all 3-part modules:

    git submodule update --init

Initialize the site:

    bin/site-init

You should now have a full functional site running with all content. You will not have any attached documents and images but all you really need to work on the site.

### Getting images from production

Running the following script will sync all images used in nodes. The very first time you run this will it transferee about 600MB. After this initial sync will it only transferee changes and new files. We are omitting big PDF and movie files.

    bin/site-sync


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
