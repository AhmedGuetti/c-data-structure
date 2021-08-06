# Singly linked list in C
A simple document written in c to make a linked list and understnd how it's work
## Table of Contents

- [Linked list in a nutshell](#linked-list-in-a-nutshell)
- [The struct of the nodes and list ](#definition-of-the-struct)
- [Inserting operations](#inserting-operations)
	* [Create a new node](#create-a-new-node)
	* [Create a list](#create-a-new-node)
	* [Add First](#pre-insertion)
	* [Add Last](#post-insertion)
	* [Add](#sorted-insertion)
- [Deleting operations](#deleting-operations)
	* [removeFirst](#removeFirst)
	* [Deleting the last node](#deleting-the-last-node)
	* [Deleting node at a position](#deleting-node-at-a-position)


## Linked list in a nutshell
> In computer science, a linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for efficient insertion or removal of elements from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is that access time is linear (and difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists.<br>--[Wikipedia](https://en.wikipedia.org/wiki/Linked_list)
## Definition of the struct
```c
struct node{
    int data;
    struct node* next;
};

typedef struct node Node;
typedef Node* S_List;

```
Node struct contains the information of the single node. In the folowing code we use data as a naif number but it's so flexible . The `struct node *next` variable points to his next item (NULL if it is the last node in the list).and the `typedef Node* S_List;` is to make the pointer to node as the list.

## Inserting operations

### Create a new node
`S_List make_node(int data)`

This function will make a allocate a physical space in the memory heap for the new node ,and this function will not be used by it's owne we use it in other function.

**Parameter:**
- `int data`:  value to insert in the node

![newNode](c-data-structure/new-node.png "new-node()")

### Add First
`void addFirst(S_List* list,int data)`

Inserts a new item at the top of the list. If the list is not empty then the new node will be the new top item, which will points to the list.

**Parameters:**
- `S_List* list`: pointer to the header of the list
- `int data`: value to insert in the node

![addFirst](c-data-structure/addFirst.png "addFirst()")

### addLast
`void addLast(S_List* list,int data)`

Inserts a new item at the end of the list. If the list is not empty then the new node will be the last one, pointed by the previous last node.

**Parameters:**
- `S_List* list`: pointer to the header of the list
- `int data`: value to insert in the node

![addLast](c-data-structure/addLast.png "postInsert()")

### add
`void add(S_List* list,int data,int position)`

Inserte an element to the list according to the position that is specified .
if the list is empty or the pposition is 1 the node will be inserted in the beginning to the list by `addFirst()`
and if the position is equale the size of the list we will inserte in the tail of the list by using `addLast`
and we are going to throw an eerror in the case of the position being greater than the size of the list.

**Parameters:**
- `(S_List* list`: pointer to the header of the list
- `int data`: value to insert in the node
- `int position`: position to insert the node

![add](c-data-structure/add.png "add()")


## Deleting operations

### removeFirst
`void removeFirst(S_List* list)`

This function will remove the first node in the list and it can be used to make a stak data structure

**Parameters:**
- `S_List* list`: pointer to the header of the list

![removeFirst](c-data-structure/removeFirst.png "removeFirst()")

### removeLast
`void removeLast(S_List* list)`

**Parameter:**
- `S_List* list`: pointer to the header of the list

This function will remove the last node in the list and it can be used to make a queue data structure


![removeLast](c-data-structure/removelast.png "removeLast()")

### removeAt
`void removeAt(S_List* list)`

**Parameter:**
- `S_List* list`: pointer to the header of the list

This function will remove the node in a known position, but it slower than an array .Hence using array in this situation will more 
effecent. 
 
![removeat](c-data-structure/removeat.png "removeat()")

## addition function

### Display list
`void display(S_List* list);`

**Parameter:**
- `S_List* list`: pointer to the header of the list

Prints all the items in the list.

### Counting nodes
`int sizelist(S_List* list)`

**Parameter:**
- `S_List* list`: pointer to the header of the list

Returns the number of the nodes in the list.


### array To list
`S_List* arrayTolist(int arr[],int size)`

**Parameter:**
- `int arr[]`: an array of number
- `int size`: size of the array

return the pointer to the new list that is made by this arrayTolist

### reverse node of list
`void reverse(S_List* list)`

**Parameter:**
- `S_List* list`: pointer to the header of the list

the pointer of node will be reverse wich gonna make the list inverste that's mean the last will become the first anf the first will be 
the last element in the list. but the pointer to the list will stay the some (this list is not a copy nither a new list ).

## Example of usage
```c
#include ...

int main(...) {
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
```


