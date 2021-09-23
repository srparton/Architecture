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
#-----------------------------Assebmly Creation--------------------------------
smallestAsm	:	smallest.c
	gcc -Og -c smallest.c

crtAsmSmallest	:	smallestAsm 
	objdump -d smallest.o >> ../Assembly/smallest/smallest.txt

1dArrayAsm	:	1dArray.c
	gcc -Og -c 1dArray.c

crtAsm1dArray	:	1dArrayAsm 
	objdump -d 1dArray.o >> ../Assembly/1dArray/1dArray.txt

Assignment1Asm	:	Assignment1.c
	gcc -Og -c Assignment1.c

crtAsmAssignment1	:	Assignment1Asm 
	objdump -d Assignment1.o >> ../Assembly/Assignment1/Assignment1.txt

binarySearchAsm	:	binarySearch.c
	gcc -Og -c binarySearch.c

crtAsmbinarySearch	:	binarySearchAsm 
	objdump -d binarySearch.o >> ../Assembly/binarySearch/binarySearch.txt

construct3Asm	:	construct3.c
	gcc -Og -c construct3.c

crtAsmconstruct3	:	construct3Asm 
	objdump -d construct3.o >> ../Assembly/construct3/construct3.txt

doWhileAsm	:	doWhile.c
	gcc -Og -c doWhile.c

crtAsmdoWhile	:	doWhileAsm 
	objdump -d doWhile.o >> ../Assembly/doWhile/doWhile.txt

inputAsm	:	input.c
	gcc -Og -c input.c

crtAsminput	:	inputAsm 
	objdump -d input.o >> ../Assembly/input/input.txt

pointerAsm	:	pointer.c
	gcc -Og -c pointer.c

crtAsmpointer	:	pointerAsm 
	objdump -d pointer.o >> ../Assembly/pointer/pointer.txt

smallestAsm	:	smallest.c
	gcc -Og -c smallest.c

crtAsmsmallest	:	smallestAsm 
	objdump -d smallest.o >> ../Assembly/smallest/smallest.txt

structAsm	:	struct.c
	gcc -Og -c struct.c

crtAsmstruct	:	structAsm 
	objdump -d struct.o >> ../Assembly/struct/struct.txt

variablesAsm	:	variables.c
	gcc -Og -c variables.c

crtAsmvariables	:	variablesAsm 
	objdump -d variables.o >> ../Assembly/variables/variables.txt

whileAsm	:	while.c
	gcc -Og -c while.c

crtAsmwhile	:	whileAsm 
	objdump -d while.o >> ../Assembly/while/while.txt
	
clean :
	rm -rf *.o binarySearch doWhile while struct variables 1dArray pointer input smallest Assignment1 construct3 .*sw* a.out

