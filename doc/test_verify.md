# Test and verify an issue
Before continuing [reset](reset.md) your local installation.

## Test a issue
This grab an existing issue and try upgrade and deploy the changes to your local installation. The general rule is that we use the issue number created by github. In this example we will test issue 666.

#### Upgrade your site to test issue 666

    bin/site-upgrade issue_666

Make sure your site turned up clean after the upgrade. If not, the issue is not OK and you should stop testing. It should look something like this:

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
    UUID Services Example       uuid_services_example   Disabled  7.x-1.0-alpha6

#### Login as user 1 without password

    bin/site-drush uli -l elmcip.dev

#### Enable all our development settings

    bin/site-drush en development_settings

Test the issue and if it is OK, change the status of it to `verified by community`.

#### To chain commands for testing
bin/reset2production ; bin/site-upgrade issue_INSERT ISSUE NUMBER; bin/site-drush en -y development_settings ; bin/site-drush uli
