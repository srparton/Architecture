#!/usr/bin/env bash
# 
# NEW_DIR: 
# args[1] = file
# Purpose: Add assembly test to Assebley files after objdump is called.
# Precondition: scrip is in folder with .c files. Folder by same name as file (without.c) exists in Assembly folder
# Postcondition: scrip will redirect output of objdump to Assembly/FILE_NAME. 
#
# NOTICE: I have changed redirect from create new to append to i dont destory any comments made on files.
#   if reused look at altering back to original ">" instead of ">>"
FILE="$1"
NUMBER="$2"
# if [-d ./Assembly/$FILE]
# then
    # gcc -c $FILE.c
    gcc -O$NUMBER Assignment1.c
	objdump -d -S Assignment1.o >> Optimization/Level$NUMBER/Level$NUMBER.txt
	# objdump -d -S $FILE.o >> ../Assembly/$FILE/$FILE.txt
# else
#    echo "folder does not exist"
# fi
	
