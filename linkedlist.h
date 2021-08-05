#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

struct node{
    int data;
    struct node* next;
};


typedef struct node Node;
typedef Node* S_List;


Node** make_list();
Node* make_node(int data);
void addFirst(Node** list,int data);
void addLast(S_List* list,int data);
void add(S_List* list,int data,int position);





void display(Node** list);



#endif