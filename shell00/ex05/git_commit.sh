# File: git_commit.sh
# Type: Shell script (single command)
# Purpose: Show the last 5 git commit hashes in the current repository.
# Shell Concepts: git log command, --pretty=format option, limiting output, version control history.
git log --pretty=format:%H -5
