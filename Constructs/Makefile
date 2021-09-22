# Makefile for the frst C++ bag
#

all: binarySearch 

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
	rm -rf *.o binarySearch doWhile while struct variables .*sw* a.out


