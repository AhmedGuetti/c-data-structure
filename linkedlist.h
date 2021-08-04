#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_


struct longnode{
    void* data;
    struct longnode* next;
    struct longnode* prev;
};
//a pointer to a pointer to a struct define the list
typedef struct longnode* dllinst;
typedef struct longnode LNode;






struct node{
    void* data;
    struct node* next;
};
//a pointer to a pointer to a struct define the list
typedef struct node* sllinst;
typedef struct node Node;

sllinst *s_makelist(void* data);
void s_printlist(sllinst* list, void(*print)(void*));
void s_inserte(sllinst* list,void* data,int position);
int s_size();


#endif