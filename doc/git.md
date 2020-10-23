# How to use Git

This document does not cover all you need to know about [Git](https://git-scm.com) and version control systems (VCS) in general but it should be enought to get you started. To learn more buy a book or read online resources like [Pro Git](https://git-scm.com/book) and [Git Immersion](https://gitimmersion.com).

## Best practise in a git workflow

* Use branches. Do not commit directly on the master (main) branch. Branches are a quick and safe way making changes without effecting the devlopment version of ELMCIP.
* Commit often. If you struggle to describe why you did the change, you changed to much.
* All changes on the main branch must contain working code. Do not commit broken code. Unfinished code will breake [staging server(s)](https://test.elmcip.net) installation and have to be reverted generating unnecessary work and noise.
* Write informative commit messages. Write why you did the changes not what you changed. In other words your motivation behind the change. Git will tell us that changed and those two should correlate. If the commit message and the introduced change does not match changes will normally be rolled back or not merged into the main repository.  
* Remember to push your changes.
* Rebase is useful but do not rebase if you do not know what you are doing.
* Have fun.

## Basic git use

Get status of your local file system. Make sure you are not having untracked or changed files in your local instance.

    git status
    
See differences between the orginal state and your installation.

    git diff

If you want to see the changes in a single file use `git diff <filename>`

Add files to be comitted (staging).

    git add <filename> <filname xx>
    
If your commit has many files you could use the name of the directory they live in.

    git add <directory name>

Commit changes you have staged for commit

    git commit

Push your changes to github

    git push


## Getting rid of unattended local changes

If your system is not clean.

    git reset --hard` 
    
Remove all local changes to files. Make sure you use this with care and you fully understand what you do. This do not remove files that are unknown (untracked) to Git. 

Run `git status` again to verify that your system are now really is clean. 
