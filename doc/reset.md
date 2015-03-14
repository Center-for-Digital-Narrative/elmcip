# Reset local installation to production
Make sure you don't have any local changes applied to your file system before continuing.

    git status

GIT should tell you that your system is clean. If not `git reset --hard` should take care of that. Want to learn more about git pls. start by reading [Pro Git](http://progit.org) or any git book available.

## Grab a copy of production (elmcip.net)
This will automagically update your local installation. It grabs copy of the database and any newly added files added since last time you did this.

    bin/reset2production <norestore username>
You are now ready to either upgrade to latest development version or test a specific branch.

Any problems syncing to production could be caused by your network connection. Norstore firewalls only open up certain IP addressed. UiB IP-range is one of the allowed ranges that can do ssh into elmcip1 and elmcip2. Using a VPN connection while outside of the university make sure it also work if you are traveling and hacking out from your favorite coffeshop.

### Upgrade from production to development
This will take your local installation from production and apply all updates that have moved into development after last release of production. This is a mandatory step that always need to be performed before attempting to alter running configuration or add new one. 

    bin/site-upgrade

Make sure your site turned up clean after the site-upgrade. It should look something like this:

        Name                        Feature                 Status    Version         State
        Date Migration Example      date_migrate_example    Disabled  7.x-2.8
        Development settings        development_settings    Enabled
        ELMCIP content types        elmcip_content_types    Enabled
        ELMCIP Views                elmcip_data_export      Enabled
        ELMCIP field instances      elmcip_field_instances  Enabled
        ELMCIP layout               elmcip_layout           Enabled
        ELMCIP permissions          elmcip_permissions      Enabled
        Setup ELMCIP                elmcip_setup            Enabled
        Features Tests              features_test           Disabled  7.x-2.3
        Schema.org example: Event   schemaorg_event         Disabled  7.x-1.0-beta4
        Schema.org example: Person  schemaorg_person        Disabled  7.x-1.0-beta4
        Schema.org example: Recipe  schemaorg_recipe        Disabled  7.x-1.0-beta4
It is not safe to continue if any of the states claim to be overridden or need review. It might lead to unexpected results and we don't want that, do we?

### Upgrade from production to a specific branch
Site-upgrade also support moving from production and strait into a specific git branch. This of often done testing specific issues.

    bin/site-upgrade <git branch name>

Make sure your site turned up clean after the site-upgrade. It should look something like this:

        Name                        Feature                 Status    Version         State
        Date Migration Example      date_migrate_example    Disabled  7.x-2.8
        Development settings        development_settings    Enabled
        ELMCIP content types        elmcip_content_types    Enabled
        ELMCIP Views                elmcip_data_export      Enabled
        ELMCIP field instances      elmcip_field_instances  Enabled
        ELMCIP layout               elmcip_layout           Enabled
        ELMCIP permissions          elmcip_permissions      Enabled
        Setup ELMCIP                elmcip_setup            Enabled
        Features Tests              features_test           Disabled  7.x-2.3
        Schema.org example: Event   schemaorg_event         Disabled  7.x-1.0-beta4
        Schema.org example: Person  schemaorg_person        Disabled  7.x-1.0-beta4
        Schema.org example: Recipe  schemaorg_recipe        Disabled  7.x-1.0-beta4
It is not safe to continue if any of the states claim to be overridden or need review. It mean that there is something that is not right with this branch. This needs to be addressed before any of these changes can be moved to our master branch.
