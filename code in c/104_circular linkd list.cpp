#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*head=NULL;

void create(int A[], int n){
	struct Node *t, *last;
	head = new Node;
	head->data = A[0];
	head->next = head;
	last=head;
	for(int i = 1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
	
}


void Display(struct Node *h){
	
	do{
		cout<<h->data<<" ";
		h=h->next;
		
	}while(h!=head);
	cout<<"\n";
	
}




int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);

	Display(head);
	return 0;
}
