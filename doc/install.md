# Install ELMCIP

This is something you only have to do on a new machine or perhaps you want to have multiple local instances of ELMCIP running.

## Software requirements

* Webserver/service like [Apache](https://httpd.apache.org) or another web server.
* MySQL or equivalent like MariaDB.
* PHP 7.2.x or newer.
* [Git](https://git-scm.com) installed. Verify by running `git --version`
* [Composer](https://getcomposer.org) installed. Verify by running `composer --version`

## Required configurations

1. Create a empty Mysql database. `elmcip` is a natural name to choice with a database user name with full access to the elmcip database. In test env. we normally also name this `elmcip`.
1. Make a directory where your ELMCIP installation can be installed and make your webserver `DocumentRoot` `<directory you just created>/elmcip/drupal`.

## Installation

1. To get the ELMCIP, Drupal core and all third party and custom modules you need to clone the `elmcip` repository.

    `git clone git@github.com:elmcip/elmcip.git elmcip`

Your webserver DocumentRoot is elmcip/drupal. Make sure your default or vhost point to this directory.

1. The elmcip use git modules and to get Drupal you need to update the submodules.

    `git submodule update --init`

1. Install drush

    `composer install --no-dev`

1. Initialize the new site:

    `bin/site-init`

You should now have a functional copy of ELMCIP with everything except for images videos. If you locally need them is there a module named 'Stage File Proxy' that can pull on demand images directly from production.

## Troubleshooting

### Problems importing database
If you are unable to restore (import) the database your database server resource might be too low. Try upping this by adding `max_allowed_packet = 100M` to your database configuration. Often called my.cnf or server.cnf and then restart the database service.

### Problem loading large Drupal pages

Example if you load pages like '/admin/people/permissions' and your are unable to change and save configuration. Please check your apache or php-error log. You might then see warnings like:

        PHP Warning:  Unknown: Input variables exceeded 1000. To increase the limit change max_input_vars in php.ini. in Unknown on line 0, referer: http://elmcip.local/admin/people/permissions

To fix this you need to change the site php.ini. Not sure where your php.ini files are run `php --ini` in the command line. Search for this line with `max_input_vars` and change it to something like this. Make sure you also uncomment the line.

        ; How many GET/POST/COOKIE input variables may be accepted
        max_input_vars = 1500

Save and restart your PHP service.
