# Contribute changes and improvements

Before you do any changes or try to commit them. Make sure your system is clean and up to date. Make sure you create a issue on github https://github.com/elmcip/elmcip/issues that explain what and why we are doing this.

    bin/reset2production <NORSTORE USERNAME>
This replace your current installation with a fresh copy of elmcip.net (files and database).

    bin/site-upgrade
Upgrade your new copy to the latest code found in the git master branch and run any needed updates.

    git checkout -b issue_number
This create your own branch from master you can safely work on. Do your changes and add them to git. These changes need to pushed to github before test.elmcip.net or other developers can test them.

If the issue then is confirmed working and can be safely applied to production will the code make it into the master branch. Snapshots of the master branch is what in the end makes the production branch.
