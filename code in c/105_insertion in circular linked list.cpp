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




int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);
	Insert(0, 16);
	Display(head);
	return 0;
}
