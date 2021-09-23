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

run_smallest : smallest
	./smallest

run_Assignment1 : Assignment1
	./Assignment1

run_construct3 : construct3
	./construct3

construct3 : construct3.o
	gcc -o construct3 construct3.o

construct3.o : construct3.c
	gcc -c construct3.c 

Assignment1 : Assignment1.o
	gcc -o Assignment1 Assignment1.o

Assignment1.o : Assignment1.c
	gcc -c Assignment1.c 

smallest : smallest.o
	gcc -o smallest smallest.o

smallest.o : smallest.c
	gcc -c smallest.c 

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
	rm -rf *.o binarySearch doWhile while struct variables 1dArray pointer input smallest Assignment1 construct3 .*sw* a.out


