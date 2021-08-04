#/***		Makefile		***/


main: main.o singly-linked-list.o doubly-linked-list.o queue-array.o queue-list.o stack-array.o stack-list.o
	gcc main.o singly-linked-list.o doubly-linked-list.o queue-array.o queue-list.o stack-array.o stack-list.o -o main


main.o: main.c singly-linked-list.c doubly-linked-list.c queue-array.c queue-list.c stack-array.c stack-list.c linkedlist.h stack.h queue.h
	gcc -c  main.c singly-linked-list.c doubly-linked-list.c queue-array.c queue-list.c stack-array.c stack-list.c


clear:
	rm *.o 
