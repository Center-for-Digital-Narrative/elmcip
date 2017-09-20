# How to create a release
To understand the release process is it important first to know about ELMCIP git branches and how they are used.

- master branch is the development branch. It contain all new code and changes that at some point moved from it's own branch and into master.
- production branch tracks latest release of ELMCIP. Pulling data from this will always give you latest production release.

## Tag your release
Releases are controlled by git tags. These are tags that create a human readable mark in commit history that define a stable release. Tags are named v + version number. In this document will we use v1.12 as a example. Get a list of existing tags by running on the master branch.

    git tag

Make sure your git position is set where you want to create a new release and git it a correct version number.

    git tag v1.12

It is important to understand that this tag is not public. It only live inside your git repository. To share this with other or to run this on the production servers it needs to be pushed to github.

    git push origin v1.12

### Reset production branch
We have now tagged our release and need to reset the tip of production to this version, but make sure your production branch is up to date.

    git checkout production
    git pull

We are now ready to reset to our new version.

    git reset --hard v1.12
    git push


## Release note
For the sake of order and to allow non git users to keep up with what changed you can ask git what changed between two releases (read tags).

    git log v1.11..v1.12

On bigger releases might this be a bit long, verbose and hard to read. To get a short and more compact overview use:

    git log v1.11..v1.12 --oneline
