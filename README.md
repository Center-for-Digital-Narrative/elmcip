# Description

This document describe how to get a local copy of the ELMCIP up and running on your local computer.

## Requirements

* A working installation of Apache, MySQL/Mariadb and PHP 5.4/5.5.
* Create a empty database named 'elmcip'.
* Database user name 'elmcip' with full access to the elmcip database.
* Set password for user elmcip to 'elmcip'.
* Git installed and configured.
* Drush installed (https://github.com/drush-ops/drush).
* A working ssh connection to Norstore application and database server. Auth should not be password based but by using your private/public SHA -key.

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

Always make sure you are using the latest version of elmcip.net and custom modules before doing any changes to modules or theme.

    git pull --rebase
    git submodule update

### How to update to latest version of Drupal core, config and 3-part modules

Automagically update your local installation.

    bin/site_sync (NORSTORE USERNAME)
    bin/site-upgrade
    

This will check out master branch, check out latest code, pull any updates from submodule drupal, run feature revert and any pending HOOK_update_N() (drush updatedb) tasks.

    bin/site-drush uli
    
Logs into to dev site as user 1.

Turn on development settings module.

    drush en development_settings

## Contribute

### Best practise in git

* Commit often.
* Commit should always contain working code. Do not commit and push half baked code since that might break test and beta.elmcip.net.
* Write informative commit messages. Write why you did it, not what you changed, Git will tell us that.
* Rember to push your changes.

## Troubleshooting

If your unable to restore (import) the full database, your mysql/mariadb resource settings my be to low. Try upping this to:

     max_allowed_packet = 100M

in your my.cnf or server.cnf and restart the db. server

    mysql.server restart

