# ELMCIP documentation

## Content
- [Installation](doc/install.md)
- [Test and verify and issue](doc/test_verify.md)
- [Contribute changes and improvements](doc/contrib.md)
- [How to create a release](doc/create_release.md)
- [How to deploy a release] (doc/deploy.md)
- NEED HERE: How to add / commit / deploy changes to a view -- need a better understanding of how features module handles views so that we can add and reconfigure views with less hassle.

## General usage

### Grab a copy of production (elmcip.net)
This will automagically update your local installation. It grabs copy of the database and any newly added files added since last time you did this.

    bin/reset2production <norestore username>

### Upgrade from production to develoment
    bin/site-upgrade

### Upgrade from production to a specific develoment branch
    bin/site-upgrade <git branch name>

### Log in as user 1 (site admin) without password
    bin/site-drush uli

Logs into to dev site as user 1 (site administrator).

### Turn on development settings module.
This enable field, views userinterface and disable all caching and much more.

    bin/site-drush en development_settings

### Using Feature module with drush
Check all modules and make sure our feature modules are overridden.

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

### git workflow

*git status* - to get status and make sure you do not have any changed files. To get rid of any unintended edited files use *git reset* or git *reset --hard*

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
