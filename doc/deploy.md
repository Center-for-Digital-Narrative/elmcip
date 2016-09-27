# How to deploy a new version in production
Before attempting to upgrade and deploy a new version, make sure that you have read and performed steps found in [How to create a release] (create_release.md). Deploying a new version of ELMCIP consist in only three steps.

1. Set Drupal into maintainance mode. This stop changes to the db.
2. Create a backup of the database.
3. Upgrade to newest version.

## Choose your installation

ELMCIP have three different sites running. Make sure to pick the right site before deploying.

 1. http://elmcip.net Production site.
 2. http://test.elmcip.net Copy of production site. A new version should be applied to this to make sure it works.
 3. http://beta.elmcip.net Development site. Anything goes. Mostly used to test out new functionality or to enable us to stage certain issue to give it a broader public access to test it out.
 
    cd /applications/
And pick your site.

## Create backup!
Always make sure to have a up to date backup of the database before attempting to do anything on a live site. A backup allow you to recover in case something goes wrong.

    bin/site-drush sql-dump --result-file=~/`date +"%d.%m.%Y"`.elmcip.sql
This create a up to date copy of the database in your home directory. 

    ls -l $HOME/`date +"%d.%m.%Y"`.elmcip.sql
to list the file you just created.

### Update our two main git branches
Our production site always run on the production branch. This branch only track the versions tagged by [How to create a release] (create_release.md).

    git checkout master
    git pull
    git checkout production
    git pull


    bin/site-upgrade production
This upgrade site to the latest release of production. To upgrade to specific version.

    bin/site-upgrade v1.12

Run `git tag` to get a view of our current versions. NOTE: Simply jumping back in time to a old version might no work if bigger structural changes have been applied to Drupal. To make that work you also need a matching old copy of the database.

## Gotcha
Our database backup runs at 03:00. Meaning, if you now attempt to locally stage a copy of the production site (`bin/reset2production`) you just upgraded it might not work. The copy you get of the database will be out of date and in a worst kind scenario, locally blow up. You have two options to fix this:

- Wait until the next day, allowing the backup system to run it's cause.
- In hurry. You have to manually create an backup of the production database. Make sure it is compressed with gzip, then alter the symbolic link of /files/latest.elmcip.sql.gz that always point to the latest database backup.
