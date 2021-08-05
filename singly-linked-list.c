#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

S_List* make_list(){
    S_List* list = (S_List*) malloc(sizeof(S_List));
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
    else *list = new_node;   
}

void addLast(S_List* list,int data){
    S_List curr = *list;
    S_List new_node = make_node(data);
    while (curr->next != NULL)
        curr = curr->next;
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
        curr = curr->next;
    new_node->next = curr->next;
    curr->next = new_node;

}


void removeFirst(S_List* list){
    S_List curr = *list;
    if(*list==NULL){
        printf("ERROR : The list is Empty");
        return;
    }
    else{
        *list = curr->next->next;
        free(curr->next);
    }
}


void removeLast(S_List* list){
    S_List curr = *list;
    S_List prev;
    if(*list==NULL){
        printf("ERROR : The list is Empty");
        return;
    }
    else{
        while (curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        free(curr);
    }
}

void removeAt(S_List* list,int position){
    S_List curr = *list;
    S_List prev= curr;
    if(*list==NULL){
        printf("ERROR : The list is Empty");
        return;
    }
    else if(position > sizelist(list)){
        printf("ERROR : Index out of Boundry cant remove the element at position %d\n", position);
        return;
    }
    else{
        for (int i = 0; i < position-1; i++)
        {
            prev = curr;
            curr = curr->next;
        }     
        prev->next = curr->next;
        free(curr);
    }
}


void reverse(S_List* list){
    S_List curr = *list;
    S_List ptrnext;
    *list = NULL;
    while (curr != NULL){
        ptrnext = curr->next;
        curr->next = *list;
        *list = curr;
        curr = ptrnext;
    }

}



S_List* arrayTolist(int arr[],int size){
    S_List* list = make_list();

    for (int i = 0; i < size; i++){
		addFirst(list,arr[i]);
        }
    return list;
    
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

