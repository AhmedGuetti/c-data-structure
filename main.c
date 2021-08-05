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
	removeFirst(List_1);
	removeLast(List_1);
	removeAt(List_1,7);
	reverse(List_1);
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	S_List* List_2 = arrayTolist(arr,10);


	 
	
	display(List_1);
	display(List_2);



}