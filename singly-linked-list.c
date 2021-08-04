#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int size=0;
sllinst* listhead;

sllinst *s_makelist(void* data){
    Node *new_node;
    sllinst *new_list = (sllinst*) malloc(sizeof(sllinst));
    *new_list = (Node*) malloc(sizeof(Node));
    new_node = *new_list;
    new_node->data = data;
    new_node->next = NULL;
    return new_list;
}


Node* s_makenode(sllinst* list,void* data){
    Node *new_node;
    new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void s_inserte(sllinst* list,void* data,int position){

    Node* new_node = s_makenode(list,data);
    Node* curr = *list;
    if(position == 0) return;
    else if(position == 1){
        *list = new_node;
    }
    else if(position > size){
        printf("Error : position out of boundry\n");
        return;
    }
    else{
        for (int i = 0; i < position - 2; i++)
    {
        curr = curr->next;
    }
    new_node->next = curr -> next;
    curr->next = new_node;
    size++;
    }
    

}


void s_printlist(sllinst* list, void(*print)(void*)){
    Node* curr = *list;
    if (curr->next == NULL) return;
    
    while(curr->next != NULL){

        print(curr->data);
        curr = curr->next;
    }
    printf("\n");
}


int s_size(){
    return size;
}