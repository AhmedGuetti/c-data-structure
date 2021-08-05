#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

S_List* make_list(){
    Node** list = (Node**) malloc(sizeof(Node*));
    *list = NULL;
    return list;
}

S_List make_node(int data){
    S_List new_node = (S_List) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
}


int sizelist(S_List* list){
    int i=0;
    S_List curr = *list;
    while (curr != NULL)
    {
        curr = curr->next;
        i++;
    }
    return i;

}
void addFirst(S_List* list,int data){
    S_List new_node = make_node(data);
    if(*list != NULL) {
        new_node->next = *list;
        *list = new_node;
    }
    else{
        *list = new_node;   
    }
}

void addLast(S_List* list,int data){
    S_List curr = *list;
    S_List new_node = make_node(data);
    while (curr->next != NULL) 
    {
        curr = curr->next;
    }
    curr->next = new_node;

}

void add(S_List* list,int data,int position){
    S_List curr = *list;
    S_List new_node = make_node(data);
    int size = sizelist(list);
    if (*list == NULL || position == 1) addFirst(list,data);

    else if(position > size+1 || position == 0) {
        printf("ERROR : position out of boundry");
        return;
    }

    



    for (int i = 0; i < position-2; i++)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;

}

void display(S_List* list){
    S_List curr = *list;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
    
}

