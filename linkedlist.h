#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

struct node{
    int data;
    struct node* next;
};


typedef struct node Node;
typedef Node* S_List;


S_List* make_list();
S_List make_node(int data);
void addFirst(S_List* list,int data);
void addLast(S_List* list,int data);
void add(S_List* list,int data,int position);
void removeFirst(S_List* list);
void removeLast(S_List* list);

void removeAt(S_List* list,int position);
void reverse(S_List* list);

S_List* arrayTolist(int data[],int size);





void display(S_List* list);
#endif