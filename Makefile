#/***		Makefile		***/


main: main.o singly-linked-list.o doubly-linked-list.o queue-array.o stack-array.o print.o
	gcc main.o singly-linked-list.o doubly-linked-list.o queue-array.o stack-array.o print.o -o main


main.o: main.c singly-linked-list.c doubly-linked-list.c queue-array.c stack-array.c print.c linkedlist.h stack.h queue.h print.h
	gcc -c  main.c singly-linked-list.c doubly-linked-list.c queue-array.c stack-array.c


clear:
	rm *.o 
