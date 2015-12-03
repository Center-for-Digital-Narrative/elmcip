# Reset local installation to production
It will take a while the very first time you run it. You minimum need a copy of the database. Syncing media files with production is optional and not really needed to work with your local copy. There is also a offline mode allowing you to work even with no network connection. Read about [working offline](offline.md), note that running offline mode also have a time saver option restoring the database.

    bin/reset2production <norestore username> <full | none>
    
`reset2production` takes two optional parameters. Omit these to use your local username and skip large files during sync.

1. Your norstore username.
2. Sync modes: `full` omit non files. Grab it all. Takes a long time to run. `none` only grabs a copy of the database.

## Get clean
Make sure you don't have any local changes applied to your file system before continuing. GIT will tell you if you have.

    git status

If your system is clean, run: `git reset --hard`. This remove any local changes to files. Note this will not remove files GIT do not know. Rerun `git status` to verify that your system are really clean. Want to learn more about GIt, try reading [Pro Git](http://progit.org) or any git book available.

## Grab a copy of production (elmcip.net)
This will automagically update your local installation. It grabs copy of the database and any if wanted newly added files added since last time you did this.

    bin/reset2production <norestore username>

You are now identical to the production site.

### Problem syncing with production

* Might could be caused by your network connection. Norstore firewalls only open up certain IP addressed. UiB IP-range is one of the allowed ranges that can do ssh into elmcip1 and elmcip2. By using a VPN connection to UiB will your machine use the allowed IP-range. This also work if you are traveling and hacking out from your favorite cafe.
* If your local username and your norstore are not identical make sure you are running `bin/reset2production <norestore username>`.
* Tired of typing passwords? Adding your ssh public key to your norstore home area remove this need. 

## Upgrade from production to development (master)

This will take your local installation from production and apply all updates that have moved into development after last release of production. This is a mandatory step that always need to be performed before attempting to alter running configuration or add new one.

    bin/site-upgrade

Make sure your site turned up clean after the site-upgrade. It should look something like this:

        Name                        Feature                 Status    Version         State
        ELMCIP content types        elmcip_content_types    Enabled
        ELMCIP Views                elmcip_data_export      Enabled
        ELMCIP field instances      elmcip_field_instances  Enabled
        ELMCIP layout               elmcip_layout           Enabled
        ELMCIP permissions          elmcip_permissions      Enabled
        Setup ELMCIP                elmcip_setup            Enabled

It is not safe to continue if any of the states claim to be overridden or are in need of a review. It might lead to unexpected results and we don't want that, do we?

## Upgrade from production to a specific branch

Site-upgrade also support moving from production and strait into a specific git branch. This of often done testing specific issues.

    bin/site-upgrade <git branch name>

Make sure your site turned up clean after the site-upgrade. It should look something like this:

        Name                        Feature                 Status    Version         State
        ELMCIP content types        elmcip_content_types    Enabled
        ELMCIP Views                elmcip_data_export      Enabled
        ELMCIP field instances      elmcip_field_instances  Enabled
        ELMCIP layout               elmcip_layout           Enabled
        ELMCIP permissions          elmcip_permissions      Enabled
        Setup ELMCIP                elmcip_setup            Enabled

It is not safe to continue if any of the states claim to be overridden or are in need of a review. It mean that there is something that is not right with this branch or your local copy. This needs to be addressed before any of these changes should be made and attempted exported.
