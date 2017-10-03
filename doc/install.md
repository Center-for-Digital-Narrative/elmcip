# ELMCIP Installation

## Requirements

* A working installation of Apache or another web server, MySQL/MariaDB and PHP 7.0 or newer.
* A empty database named `elmcip`.
* Database user name `elmcip` with full access to the elmcip database.
* Set password for user elmcip to `elmcip`.
* Git installed and configured.
* Drush installed (https://github.com/drush-ops/drush).
* A working ssh connection to Norstore application and database server. Auth should not be password based but by using your private/public SHA -key.
* You must be in your local elmcip directory.

## Installation

Get main repository and any custom modules. Run this in your web server document root.

    git clone git@github.com:elmcip/elmcip.git
    cd elmcip

Get drupal core and all 3-part modules:

    git submodule update --init

Initialize the new site:

    bin/site-init <norstore username>

You should now have a fully functional site, with all content, except files and images. [Reset and upgrade local installation](reset.md) explain how to get images and media to your local site if needed.
