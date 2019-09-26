#!/bin/sh

original_head=$(git rev-parse HEAD) || exit
git pull origin || exit
updated_head=$(git rev-parse HEAD) || exit

if test "$updated_head" = "$original_head"; then
  echo Upstream is idling
  exit 1
else
  echo These new commits were brought in
  git log "$original_head".."$updated_head" --oneline
  exit 0
fi
