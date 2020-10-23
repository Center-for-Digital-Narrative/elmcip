# Make changes to ELMCIP

Before starting make sure you first [reset your local installation](reset.md) your local installation.

## Make a change to the existing site

Make the wanted changes through the Drupal UI, example a view, alter fields help texts and so on. The changes are stored in your database and you need to export them by using the Features module.

These changes will cause the feature module to get overridden. Confirm your changes by running.

    bin/site-drush fl
    
Export the changes from the database to the file system 

    bin/site-drush fu <feature name>

For more information about how to use the Features module, read our [Features document](features.md).

You now have exported your changes to the file system and these need to added with Git and pushed upstream allowing test.elmcip.net or other developers to test the changes. To learn more about how to work with git read the [git documentation](git.md).