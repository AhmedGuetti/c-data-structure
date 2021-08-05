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
S_List* arrayTolist(int data[],int size);





void display(Node** list);



#endif