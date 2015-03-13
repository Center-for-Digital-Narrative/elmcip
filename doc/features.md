# Features general usage
Using Feature module with drush

List all feature modules and their current state.

    bin/site-drush fl

Revert a overridden feature module. This overwrite the database with configuration and settings stored in the feature module.

    bin/site-drush fr <module name>


### Export changes to local file system
Intended changes is copied from the database and into the feature module with

    bin/site-drush fu <module name>

### 
Show the difference between the database and configuration stored in the feature module.

    bin/site-drush fd <module name>

