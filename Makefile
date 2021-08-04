#/***		Makefile		***/


main: main.o singly-linked-list.o doubly-linked-list.o queue-array.o queue-list.o stack-array.o stack-list.o print.o
	gcc main.o singly-linked-list.o doubly-linked-list.o queue-array.o queue-list.o stack-array.o stack-list.o print.o -o main


main.o: main.c singly-linked-list.c doubly-linked-list.c queue-array.c queue-list.c stack-array.c stack-list.c print.c linkedlist.h stack.h queue.h print.h
	gcc -c  main.c singly-linked-list.c doubly-linked-list.c queue-array.c queue-list.c stack-array.c stack-list.c


clear:
	rm *.o 
