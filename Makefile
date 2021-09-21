# Makefile for the frst C++ bag
#

all: binarySearch 

run_binarySearch : binarySearch
	./binarySearch

run_levensthain : levensthain
	./levensthain

binarySearch : binarySearch.o
	gcc -o binarySearch binarySearch.o

binarySearch.o : binarySearch.c
	gcc -c binarySearch.c

levensthain : Assignment1.o
	gcc -o levensthain Assignment1.o

levensthain.o :	Assignment1.c 
	gcc -c Assignment1.c
clean :
	rm -rf *.o binarySearch levensthain .*sw* 


