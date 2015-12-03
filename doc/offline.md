# ELMCIP Offline mode

 This does attempt to do any network connections.

  * Enable you to work while traveling.
  * Speeds up working with ELMCIP.
  * Allow you to reset while traveling.

## What does this mean

Any changes to the development branch (master) will never pulled from github. No attempt to sync with Norstore getting files and databse. Are your local copy more and less up to date is this not a big problem.
 
## General usage
 
 Use is more and less identical to the online version except there is no need to pass it your username.
 
### Getting clean 
 
Make sure you don't have any local changes applied to your file system before continuing. GIT will tell you if you have.
 
    git status
 
If your system is clean, run: `git reset --hard`. This remove any local changes to files. Note this will not remove files GIT do not know. Rerun `git status` to verify that your system are really clean. Want to learn more about GIt, try reading [Pro Git](http://progit.org) or any git book available.

### Reset
 
This reset you back to production and grabbing the latest local database copy.

    bin/offline_reset2production
     
## Going to Ludicrous Speed
 
This remove all cache tables, search index and other from system, greatly reducing time spent restoring database and working with in general.
   
    bin/make-fast
   
Changes are made to the running database but also leave a uncompressed copy of the optimized databse in the `site` directory.
 
### Using optimized database copy
 
    bin/offline_reset2production fast
 
### How fast is fast

 Benchmarks done when your local site is warm, aka there was no new files to sync. Meaning the online sync might be slower for your system.

* online reset (bin/reset2production): 7m
* Offline (bin/offline_reset2production): 6m 48sec
* Offline fast (bin/offline_reset2production fast): 1m 33sec
