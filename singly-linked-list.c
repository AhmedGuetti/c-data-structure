#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

Node** make_list(){
    Node** list = (Node**) malloc(sizeof(Node*));
    return list;
}

Node* make_node(int data){
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
}



void addFirst(Node** list,int data){
    Node* new_node = make_node(data);
    if(*list != NULL) {
        new_node->next = *list;
        *list = new_node;
    }
    else{
        *list = new_node;   
    }
}




void display(Node** list){
    Node* curr = *list;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
    
}

