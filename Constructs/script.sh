#!/usr/bin/env zsh
# 
# NEW_DIR: 
# args[1] = file
# Purpose: 
# Precondition: 
# Postcondition:
FILE="$1"
#if [-d ./Assembly/$FILE]
#then
    gcc -c $FILE.c
    #gcc -Og -c Constructs/$FILE.c
	objdump -d $FILE.o >> ../Assembly/$FILE/$FILE.txt
#else
#    echo "folder does not exist"
#fi
	
