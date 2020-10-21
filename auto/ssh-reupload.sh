#!/bin/bash

printf "\n\y\n\n"| ssh-keygen
if [ cat ~/.ssh/id_rsa.pub | pbcopy ]
	echo "successfully copied pub ssh into clipboard"
fi
