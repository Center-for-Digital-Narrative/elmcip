# Contribute changes and improvements
Before starting make sure you [reset your local installation](reset.md).

## Make changes to existing configuration
You are now ready to make changes your local installation. Peform your changes through Drupal UI for views, fields and other changes.

## Work with the features module from drush
These changes will cause the feature module to get overridden. Run `bin/site-drush fl` to confirm this. Export the changes from the database to the file system 'bin/site-drush fu <feature name>'. 

For more information, read our [features module document](features.md). You should now have moved the changes you did to the Drupal database and to the file system.

## work with git

    git checkout -b issue_number
This create your own branch out from the master branch that you can safely work on. Do your changes and add them to git. check out [our brief git section](../README.md).

These changes need to pushed to github before test.elmcip.net or other developers can test them.

If the issue then is confirmed working and can be safely applied to production will the code make it into the master branch. Snapshots of the master branch is what in the end makes the production branch.

