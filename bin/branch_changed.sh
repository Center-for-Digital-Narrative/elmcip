#!/bin/bash

original_head=$(git rev-parse HEAD) || exit 1
git pull origin || exit 1
updated_head=$(git rev-parse HEAD) || exit 1

if test "$updated_head" = "$original_head"; then
  date +'%Y-%m-%d %H:%M'
  exit 1
else
  echo These new commits were brought in
  git log "$original_head".."$updated_head" --oneline
  exit 0
fi
