# Makefile for the frst C++ bag
#

all: binarySearch 

run : binarySearch
	./binarySearch

binarySearch : binarySearch.o
	g++ -o binarySearch binarySearch.o


binarySearch.o : binarySearch.c
	g++ -c binarySearch.c

clean :
	rm -rf *.o binarySearch .*sw*


