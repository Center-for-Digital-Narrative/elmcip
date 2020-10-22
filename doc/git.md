# how to use Git
This document does not try to cover all you need to know about [Git](https://git-scm.com) and version control systems (VCS) but should get you started working with git.

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

If you whant to see the changes in a single file use `git diff <filename>`

Add files to be comitted (staging).

    git add <filename> <filname xx>
    
If your commit has many files you could use the name of the directory they live in.

    git add <directory name>

Commit changes you have staged for commit

    git commit

Push your changes to github

    git push

