#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}*head;

void create(int A[], int n){
	struct Node *t, *last;
	head= new Node;
	head->data = A[0];
	head->next = NULL;
	head->prev = NULL;
	last = head;
	for(int i=1;i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		t->prev = last;
		last = t;
		last->next = head;
		head->prev = last;
	}
}


void display(struct Node *h){
	do{
		cout<<h->data<<" ";
		h= h->next;
		}while(h!= head);
}

void insert(struct Node *h, int pos, int key){
	struct Node *t;
	int i;
	if(pos ==0){
		t = new Node;
		t->data = key;
		while(h->next!=head){
			h = h->next;
		}
		
		t->next = head;
		head->prev = t;
		head->prev = h;
		h->next = t;
		head = t;
		 
	}
	else{
		t = new Node;
		t->data = key;
		for(int i =1; i<pos-1; i++){
			h = h->next;
		}
		t->next = h->next;
		h->next->prev = t;
		h->next = t;
		t->prev = h;
		
	}
}
void Delete(struct Node *h , int pos){
	int i;
	struct Node *q;
	h = head;
	if(pos ==0){
		while(h->next != head){
			h = h->next;
		}
		h->next = head->next;
		head->next->prev=h->next;
		delete head;
		head = h->next;
	}
	
	else{
		h = head;
		for(int i=1; i<pos-1; i++){
			h = h->next;
		}
		q = h->next;
		h->next = q->next;
		q->next->prev = h;
		delete q;
		
	}
}

int main(){
	int A[]= {1, 2,3,4 ,5};
	create(A, 5);
	insert(head, 4, 16);
	
	Delete(head, 4);
	display(head);
}
