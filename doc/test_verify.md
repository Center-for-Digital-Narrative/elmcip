# How to locally test and verify a issue

Before continuing make sure your have read and performed a [reset](reset.md) of your local installation.

## Test a issue

This grab an existing issue and try upgrade and deploy the changes to your local installation. The general rule is that we use the issue number created by github. In this example we will test issue 666.

#### Upgrade your site to test issue 666

    bin/site-upgrade issue_666

Make sure your site turned up clean after the upgrade. If not, the issue is not OK and you should stop testing. It should look something like this:

    Name                        Feature                 Status    Version         State
    ELMCIP content types        elmcip_content_types    Enabled
    ELMCIP Views                elmcip_data_export      Enabled
    ELMCIP field instances      elmcip_field_instances  Enabled
    ELMCIP layout               elmcip_layout           Enabled
    ELMCIP permissions          elmcip_permissions      Enabled
    ELMCIP tests                elmcip_setup            Enabled
    ...

#### Login as user 1 without password

    bin/site-drush uli

#### Enable all our development settings

    bin/site-drush en --yes development_settings

Test the issue and if it is OK, change the status of it to `verified by community`.

#### Chain commands for quicker testing

Depending on the speed of your computer this might allow you to refill your cup of your favorite brew while it run.

    bin/offline_reset2production; bin/site-upgrade <issue_number>; bin/site-drush en --yes development_settings; bin/site-drush uli
