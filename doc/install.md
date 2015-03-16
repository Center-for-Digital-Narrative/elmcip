## Installation

## Requirements
* A working installation of Apache, MySQL/Mariadb and PHP 5.4 or newer.
* A empty database named `elmcip`.
* Database user name `elmcip` with full access to the elmcip database.
* Set password for user elmcip to `elmcip`.
* Git installed and configured.
* Drush installed (https://github.com/drush-ops/drush).
* A working ssh connection to Norstore application and database server. Auth should not be password based but by using your private/public SHA -key.
* You must be in your local elmcip directory (e.g. websites/sites/elmcip)

Get main repository and our custom modules:

    git clone git@github.com:elmcip/elmcip.git

Get drupal core and all 3-part modules:

    git submodule update --init

Initialize the new site:

    bin/site-init <norstore username>

You should now have a fully functional site, with all content, except attached documents/files and images.

### Getting document and image-files from production

Running the following script will copy image and documents added to the elmcip content.

    bin/reset2production <norstore username>

The very first time you run this will it transferee about 600MB. After this initial sync it will only transferee changed and new files on each reset. We are omitting all PDF and movie files due to their large size aka transferee time.

NOTE: CAN WE ADD AN OPTION / INSTRUCTIONS ON HOW TO SYNCH ALL / CREATE AN ENTIRE BACKUP (perhaps in anohter doc)
