#include<stdio.h>
#include<stdlib.h>



typedef struct{
	int data;
	struct Node* link;
} Node;

//Globale variable is accesed every where
Node* head;




void InsertAtFirst(int data){
	Node* current = (Node*)malloc(sizeof(Node));
	current->data = data;
	current->link = NULL;
	if (head != NULL){
			(current->link) = head;
	}

	head = current;
}

void DeleteFirst(){
	Node* current = head;
	head = current -> link;
	free(current);
}


void InsertAtLast(int data){
	Node* newnode = (Node*)malloc(sizeof(Node));
	Node* currentptr = head;
	newnode->data = data;
	newnode->link = NULL;
	while(currentptr->link != NULL){
		currentptr = currentptr->link;
	}
	currentptr->link = newnode;

}

void DeleteLast(){
	Node* currentptr = head;
	Node* previousptr;
	while(currentptr->link != NULL){
		previousptr = currentptr;
		currentptr = currentptr->link;
	}
	previousptr -> link = NULL;
	free(currentptr);
	
}


void InsertAt(int data,unsigned int position){
	int i;
	Node* newnode = (Node*)malloc(sizeof(Node));
	Node* currentptr = head;
	newnode->data = data;
	newnode->link = NULL;
	if (position == 0) return;
	else if(position == 1) InsertAtFirst(data);
	else{
		for (i = 0; i < position-1; i++){
			currentptr = currentptr->link;
		}
		if (currentptr->link == NULL) InsertAtLast(data);
		else{
			newnode -> link = currentptr ->link;
			currentptr -> link = newnode;
		}
	}

}

void DeleteAt(unsigned int position){
	int i;
	Node* currentptr = head;
	Node* previousptr;
	if (position == 0) return NULL;
	else if(position == 1) DeleteFirst();
	else{
		for (i = 0; i < position-1; i++){
			if(currentptr -> link != NULL){
			previousptr = currentptr;
			currentptr = currentptr->link;
			}
			else {
				printf("The position is out of range.\n");
				return;
			}
			
			}//a reale large position will delete the last node
		if (currentptr->link == NULL) DeleteLast();
		else{
			previousptr -> link = currentptr ->link;
			free(currentptr);
		}
	}

}

//don't passe the header as an argumment if you whant to modify it 
void reverse(){
	Node* current = head;
	Node* next;
	head=NULL;

	while (current != NULL)
	{
		next = current-> link;
		current->link = head;
		head = current;
		current = next;
	}

	
}


void print(Node* head){
	while (head != NULL)
	{
		printf("%d  ", head->data);
		head = head->link;
	}
	printf("\n");
}



int main(){
	head = NULL; //in the case of an empty list 
	
	InsertAtFirst(45);
	InsertAtFirst(5);
	InsertAtFirst(9);
	InsertAtFirst(78);
	InsertAtFirst(64);
	InsertAtLast(10);
	InsertAt(700,4);
	DeleteFirst();
	DeleteLast();
	print(head);
	reverse();
	print(head);
	

}









