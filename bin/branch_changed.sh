#!/bin/sh

git checkout master || exit
original_head=$(git rev-parse HEAD) || exit
git pull origin || exit
updated_head=$(git rev-parse HEAD) || exit

if test "$updated_head" = "$original_head"; then
  echo Upstream is idling
else
  echo These new commits were brought in
  git shortlog "$original_head".."$updated_head"
fi
