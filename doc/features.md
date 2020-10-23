# Using the Features module

The [Features](https://www.drupal.org/project/features) module allow us to export and import configuration that else would be locked in the database together with the content like nodes, taxonomy terms and so on.

The easiest way of interacting with is by using the command line tool [Drush](https://www.drush.org). There is a UI for it inside Drupal, feel free to explore it (`/admin/structure/features`), it will not be documented here. An excellent starting point to learn more about Features is the official [module documentation](https://www.drupal.org/node/580026).

## List all feature modules and their current state.

This compares the exported configuration, living on your filesystem, with the one stored inside the database.

    bin/site-drush fl

#### Feature list example 

```
bin/site-drush fl
 Name                                Feature                             Status    Version               State
 ELMCIP development settings         development_settings                Disabled
 ELMCIP book                         elmcip_book                         Disabled
 ELMCIP content types                elmcip_content_types                Enabled
 ELMCIP Creative work                elmcip_creative_work                Enabled
 ELMCIP Views                        elmcip_data_export                  Enabled
 ELMCIP field instances              elmcip_field_instances              Enabled
 ELMCIP layout                       elmcip_layout                       Enabled
 ELMCIP permissions                  elmcip_permissions                  Enabled
 ELMCIP Platform                     elmcip_platform                     Enabled
 ELMCIP search                       elmcip_search                       Enabled
 ELMCIP setup                        elmcip_setup                        Enabled
 ELMCIP views platform organization  elmcip_views_platform_organization  Enabled
...
```

The modules starting with the name ELMCIP is the one you work with and should pay attention to. In the example above the state is clean meaning the config stored on the files are identical to the running in your database.

## Features module in a overridden state

This is when your database contains a change to the configuration. They are not clean or identical as in the example above.

```
bin/site-drush fl
 Name                                Feature                             Status    Version               State
 ELMCIP content types                elmcip_content_types                Enabled
 ELMCIP Creative work                elmcip_creative_work                Enabled
 ELMCIP Views                        elmcip_data_export                  Enabled
 ELMCIP field instances              elmcip_field_instances              Enabled
 ELMCIP layout                       elmcip_layout                       Enabled
 ELMCIP permissions                  elmcip_permissions                  Enabled                         Overridden
...
```

If this is a unattended change you should reset your local installation to production and check again. You can also ask Drupal to tell you what the change is by running `bin/site-drush fd <feature>`.

#### Features diff example
```
bin/site-drush fd elmcip_permissions
   Legend:
   Code:       drush features-revert will remove the overrides.
   Overrides:  drush features-update will update the exported feature with the displayed overrides
   
   
   Component type: user_permission
           'administrative editor' => 'administrative editor',
           'administrator' => 'administrator',
   >       'anonymous user' => 'anonymous user',
           'authenticated user' => 'authenticated user',
           'contributor' => 'contributor',
```

These can be difficult to understand but easy to read. The example above we know it has something to do with the permission derived from the name of the feature module overridden, `elmcip_permission`. The `>` is telling us permission have been changed and users not logged in (anonymous user) gained permission to do something. Due to lack of context here it is hard to tell. That can be addressed by using the `--lines` option.

```
bin/site-drush fd --lines=10 elmcip_permissions
Legend:
Code:       drush features-revert will remove the overrides.
Overrides:  drush features-update will update the exported feature with the displayed overrides


Component type: user_permission
      'roles' => array(
        'administrator' => 'administrator',
      ),
    ),
    'show format tips' => array(
      'module' => 'better_formats',
      'name' => 'show format tips',
      'roles' => array(
        'administrative editor' => 'administrative editor',
        'administrator' => 'administrator',
>       'anonymous user' => 'anonymous user',
        'authenticated user' => 'authenticated user',
        'contributor' => 'contributor',
        'editor' => 'editor',
        'submitter' => 'submitter',
        'supereditor' => 'supereditor',
      ),
    ),
    'show more format tips link' => array(
      'module' => 'better_formats',
      'name' => 'show more format tips link',
```

So it allow users not logged in to view the format tips that is a change to do not make sense since they can not add content except in the contact form and search forms and filters. Next paragraph we will attempt to revert this change.

## Revert a overridden features module 

This revert unattended changes in the database.

    bin/site-drush fr <module name>

### Features revert example

```
bin/site-drush fr elmcip_permissions
Do you really want to revert elmcip_permissions.user_permission? (y/n): y
Reverted elmcip_permissions.user_permission.

bin/site-drush fl

 Name                                Feature                             Status    Version               State
 ELMCIP development settings         development_settings                Disabled
 ELMCIP book                         elmcip_book                         Disabled
 ELMCIP content types                elmcip_content_types                Enabled
 ELMCIP Creative work                elmcip_creative_work                Enabled
 ELMCIP Views                        elmcip_data_export                  Enabled
 ELMCIP field instances              elmcip_field_instances              Enabled
 ELMCIP layout                       elmcip_layout                       Enabled
 ELMCIP permissions                  elmcip_permissions                  Enabled
 ELMCIP platform                     elmcip_platform                     Enabled
 ELMCIP search                       elmcip_search                       Enabled
 ELMCIP setup                        elmcip_setup                        Enabled
 ELMCIP views platform organization  elmcip_views_platform_organization  Enabled
```

Any we are back in clean state and the unattended change in the permissions system is gone. This will not replace doing a full site reset. Not 100% of settings and variables is stored in files. Drupal 7 was not designed to export all configuration like this and the [Features](https://www.drupal.org/project/features) and the [Strongarm](https://www.drupal.org/project/strongarm)module have to pull of more than one magic trick to make it all work.

 
### Export changes to local file system
Intended changes is copied from the database and into the feature module with

    bin/site-drush fu <module name>
