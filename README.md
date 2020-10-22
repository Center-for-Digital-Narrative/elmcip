# ELMCIP documentation

## Content
- [Installation](doc/install.md)
- [Reset and upgrade local installation](doc/reset.md)
- [How to work with the features module](doc/features.md)
- [Test and verify an issue](doc/test_verify.md)
- [Contribute changes and improvements](doc/contrib.md)
- [How to create a release](doc/create_release.md)
- [How to deploy a release](doc/deploy.md)
- [How to use Git](doc/git.md)
- [Old user guide](doc/book.md)

## General use of Drupal and drush
Most of ELMCIP Drupal configuration get stored in configuration files and versions and changes tracked by [Git](https://git-scm.com). The Drupal module [Features](https://www.drupal.org/project/features) enable us to breake down this into multiple modules. Other changes and updates get run by [Drupal hook_update_N() tasks](https://api.drupal.org/api/drupal/modules!system!system.api.php/function/hook_update_N/7).

An excellent starting point to learn more about Features is the official [module documentation](https://www.drupal.org/node/580026).

### Log in as user 1 (site admin) to site example.com without using a password
    bin/site-drush uli --uri=example.com

### Enable ELMCIP development module.
This module enables UI not needed in production, disables caching and development related modules and libraries.

    bin/site-drush en --yes development_settings

## Troubleshooting

### Problems importing database
If you are unable to restore (import) the full database, your mysql/mariadb resource settings my be to low. Try upping this to:

     max_allowed_packet = 100M

in your my.cnf or server.cnf  ? WHERE DO I FIND THIS ? and restart the db. server

    mysql.server restart

NOTE: NEED EXACT COMMANDS FOR THE ABOVE

### Problems changing Drupal permissions
Problems getting changing permissions on '/admin/people/permissions'? Check your apache/php-error log. You might then see warnings like:

        PHP Warning:  Unknown: Input variables exceeded 1000. To increase the limit change max_input_vars in php.ini. in Unknown on line 0, referer: http://elmcip.dev/admin/people/permissions

To fix it, track down your php.ini (/usr/local/etc/php/5.5/php.ini or 5.4) and search for this line. Uncomment the max_input_vars line and alter it to:

        ; How many GET/POST/COOKIE input variables may be accepted
        max_input_vars = 2000
