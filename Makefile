#/***		Makefile		***/


main: main.o singly-linked-list.o
	gcc main.o singly-linked-list.o  -o main


main.o: main.c singly-linked-list.c linkedlist.h 
	gcc -c  main.c singly-linked-list.c


clear:
	rm *.o 
