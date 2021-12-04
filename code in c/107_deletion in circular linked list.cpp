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


void Insert(int pos, int key){
	struct Node *t, *h;
	if(pos ==0){
		t = new Node;
		t->data = key;
		if(head == NULL){
			head = t;
			head->next = head;
		}
		else{
			h = head;
			while(h->next != head){
				h= h->next;
			}
			h->next = t;
			t->next = head;
			head = t; 
		}
	}
	else{
		h= head;
		t = new Node;
		t->data = key;
		for(int i = 1; i<pos-1; i++){
			h= h->next;
		}
		t->next = h->next;
		h->next = t;
	}
}


void Delete(struct Node *h, int pos){
	
	if(pos == 1){
		h = head;
		while(h!=head){
			h= h->next;
		}
		
		if(h==head){
			delete head;
			head = NULL;		
		}
		else{
			h->next = head->next;
			int x = head->data;
			head=h->next;
		}
	
	}
	else{
		struct Node *q;
		h = head;
		for(int i=0; i<pos-2; i++){
			h=h->next;
		}
		q = h->next;
		h->next = q->next;
		int x = q->data;
		delete q;
	}	
	
}

int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);
	Insert(4, 16);
	Display(head);
	Delete(head, 6);
	Display(head);
	return 0;
	
}
