#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

S_List* make_list(){
    Node** list = (Node**) malloc(sizeof(Node*));
    return list;
}

S_List make_node(int data){
    S_List new_node = (S_List) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
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




void display(S_List* list){
    S_List curr = *list;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
    
}

