# ELMCIP documentation

## Content
- [Installation](doc/install.md)
- [Reset and upgrade local installation](doc/reset.md)
- [Test and verify and issue](doc/test_verify.md)
- [Contribute changes and improvements](doc/contrib.md)
- [How to create a release](doc/create_release.md)
- [How to deploy a release](doc/deploy.md)
- [Work with the feature module](feature.md)
- NEED HERE: How to add / commit / deploy changes to a view -- need a better understanding of how features module handles views so that we can add and reconfigure views with less hassle.

## General usage
ELMCIP Drupal configuration is controlled in multiple [Features](https://www.drupal.org/project/features) modules. Other changes, example housekeeping tasks are run in code by [hook_update_N()](https://api.drupal.org/api/drupal/modules!system!system.api.php/function/hook_update_N/7). Need to learn more about Features, have a look at the provided [Featuers documentation](https://www.drupal.org/node/580026).

### Log in as user 1 (site admin) without password
    bin/site-drush uli
Logs into to dev site as user 1 (site administrator).

### Turn on development settings module.
This enable field, views userinterface and disable all caching and much more.

    bin/site-drush en development_settings

### Using Feature module with drush
List all feature modules and their current state.

    bin/site-drush fl

Revert a overridden feature module. This overwrite the database with configuration and settings stored in the feature module.

    bin/site-drush fr <module name>

Intended changes is copied from the database and into the feature module with

    bin/site-drush fu <module name>

Show the difference between the database and configuration stored in the feature module.

    bin/site-drush fd <module name>

## Best practise in git

* Commit often.
* Commit should always contain working code. Do not commit and push half baked code. That might break test and beta.elmcip.net installation and will get reverted from the repository.
* Write informative commit messages. Write why you did the changes, not what you just changed, Git will tell us that.
* Remember to push your changes.

## Troubleshooting

### Problems importing database
If your unable to restore (import) the full database, your mysql/mariadb resource settings my be to low. Try upping this to:

     max_allowed_packet = 100M

in your my.cnf or server.cnf and restart the db. server

    mysql.server restart

### Problems changing Drupal permissions
Problems getting changing permissions on '/admin/people/permissions'? Check your apache/php-error log. You might then see warnings like:

        PHP Warning:  Unknown: Input variables exceeded 1000. To increase the limit change max_input_vars in php.ini. in Unknown on line 0, referer: http://elmcip.dev/admin/people/permissions

To fix it, track down your php.ini (/usr/local/etc/php/5.5/php.ini or 5.4) and search for this line. Uncomment the max_input_vars line and alter it to:

        ; How many GET/POST/COOKIE input variables may be accepted
        max_input_vars = 2000
