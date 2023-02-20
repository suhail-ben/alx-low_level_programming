#!/bin/bash

# Loop through the list of files
for file in $(ls)
do
    # Ignore any files that start with a dot, are not regular files, or are the script itself
    if [[ $file == .*  ! -f $file  $file == "commit_each.sh" ]]; then
        continue
    fi

    # Add the file
    git add $file

    # Commit with the file name as the commit message
    git commit -m "Update $file"
done

# Push to the default branch
git push
