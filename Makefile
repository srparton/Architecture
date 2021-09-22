# Makefile for the frst C++ bag
#

#all: binarySearch 

run_binarySearch : binarySearch
	./binarySearch

run_doWhile : doWhile
	./doWhile

run_struct : struct
	./struct

run_variables : variables
	./variables

run_while : while
	./while

run_1dArray : 1dArray
	./1dArray

run_pointer : pointer
	./pointer

run_input : input
	./input

input : input.o
	gcc -o input input.o

input.o : input.c
	gcc -c input.c 

pointer : pointer.o
	gcc -o pointer pointer.o

pointer.o : pointer.c
	gcc -c pointer.c 

1dArray : 1dArray.o
	gcc -o 1dArray 1dArray.o

1dArray.o : 1dArray.c
	gcc -c 1dArray.c 

binarySearch : binarySearch.o
	gcc -o binarySearch binarySearch.o

binarySearch.o : binarySearch.c
	gcc -c binarySearch.c

doWhile	:	doWhile.o
	gcc	-o doWhile doWhile.o

doWhile.o	:	doWhile.c 
	gcc -c doWhile.c 

struct	:	struct.o
	gcc	-o struct struct.o

struct.o	:struct.c 
	gcc -c struct.c 

variables	:	variables.o
	gcc	-o variables variables.o

variables.o	:	variables.c 
	gcc -c variables.c 

while	:	while.o
	gcc	-o while while.o

while.o	:	while.c 
	gcc -c while.c 


clean :
	rm -rf *.o binarySearch doWhile while struct variables 1dArray pointer input .*sw* a.out


