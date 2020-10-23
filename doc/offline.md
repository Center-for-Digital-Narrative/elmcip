# ELMCIP offline mode

 Allow you to work locally without any network connections, aka flight mode.

  * Work while traveling.
  * Speeds up your local work flow without needing to create new database copies.

## What does all this mean

Any changes to the development branch (master) will never pulled from github. No attempt to sync with Norstore getting files and databse. Are your local copy more and less up to date is this not a big problem.
 
## General usage
 
 Use is more and less identical to the online version except there is no need to pass it your username.
 
### Getting clean 
 
Make sure you don't have any local changes applied to your file system before continuing. Git will tell you if you so have.
 
    git status

For more read our [Git documentation](git.md)

### Reset
 
This reset you back to production and grabbing the latest local database copy.

    bin/offline_reset2production
     
## Optimising your local work flow
 
Written to speed up your local workflow though as usual you need to know what your are doing and is normally only used by more experienced users. This utility removes all database caching tables not needed. This greatly reduces the size and time spent restoring the database.
   
    bin/make-fast
   
It perform these changes your running database but also create a uncompressed copy of the optimized database in `site/latest.elmcip.sql`.
 
To use this datbase copy run `offline_reset2production` with the `fast` option.
 
    bin/offline_reset2production fast
 
### How fast is make-fast

* online reset (bin/reset2production): 7m
* Offline (bin/offline_reset2production): 6m 48sec
* Offline fast (bin/offline_reset2production fast): 1m 33sec
