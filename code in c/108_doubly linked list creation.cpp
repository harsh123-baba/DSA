#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}*head;

void create(int A[], int n){
	struct Node *t , *last;
	head = new Node;
	head->data = A[0];
	head->next = NULL;
	head->prev = NULL;
	last = head;
	
	for(int i=1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->prev = last;
		t->next = NULL;		
		last->next = t;
		last = t;
	}
	
}



int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);
//	Display(head);
}
