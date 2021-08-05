#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




int main(){
	S_List* List_1 = make_list();
	addFirst(List_1,14);
	addFirst(List_1,78);
	addFirst(List_1,64);
	addFirst(List_1,95);
	addFirst(List_1,546);
	addLast(List_1,7);
	addLast(List_1,789);
	addLast(List_1,2);
	add(List_1,1,5);
	display(List_1);



}