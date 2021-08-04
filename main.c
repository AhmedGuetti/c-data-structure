#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




int main(){
	Node** List_1 = make_list();
	addFirst(List_1,14);
	addFirst(List_1,78);
	addFirst(List_1,64);
	addFirst(List_1,95);
	addFirst(List_1,546);

	display(List_1);



}