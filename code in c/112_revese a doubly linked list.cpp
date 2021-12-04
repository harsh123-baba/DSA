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


void Display(struct Node *h){
	while(h){
		cout<<h->data<<" ";
		h= h->next;
	}
}


void Insert(struct Node *h,int pos, int key){
	struct Node  *t;
	if(pos ==0){
		t = new Node;
		t->data = key;
		t->next= head;
		head->prev = t;
		t->prev = NULL;
		head= t;
	}
	else{
		t = new Node;
		t->data = key;
		for(int i=1; i<pos-1; i++){
			h=h->next;
		}
		t->prev =h; 
		t->next = h->next;
		h->next = t;
		if(h->next){
			h->next->prev = t;
		}
			
	}
}

void Delete(struct Node *h, int pos){
	//struct Node *q;
	int i, x=-1;
	if(pos==1){
		h = head;		
		head = head->next;
		if(head){
			head->prev = NULL;
		}
		x = h->data;
		delete h;
	}
	else{
		for(i = 0; i<pos-1; i++){
			h = h->next;
		}
		h->prev->next = h->next;
		if(h->next){
			h->next->prev = h->prev;
		}
		x = h->data;
		delete h;		
	}
}

void Reverse(struct Node *h){
	h = head;
	while(h){
		struct Node *temp;
		temp = h->next;
		h->next = h->prev;
		h->prev = temp;
		h = h->prev;
		if(h!=NULL && h->next==NULL){
			head = h;
		} 
	}
}


int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);
	//Delete(head, 4);
	//Display(head);
	Reverse(head);
	Display(head);
	
}
