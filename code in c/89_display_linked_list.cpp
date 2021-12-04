#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first;

void create(int A[], int n){
	int i;
	struct Node *t,*last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for(i=1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p = p->next;
	}
}


int main(){
	int A[] = {2, 3, 4, 5, 6, 4,7};
	create(A, 7);
	display(first);
}
