# How to work with Drupal and drush

Drush is a command line utility that give you powerful functionality you can leverage from the command line and custom script.

## Log in as user 1 (site admin) to site example.com without using a password
    bin/site-drush uli --uri=example.com

## Enable ELMCIP development module.

This module enables UI not needed in production, disables caching and development related modules and libraries.

    bin/site-drush en --yes development_settings
