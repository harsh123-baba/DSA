#include<stdio.h>
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;	
}*first;

void create(int A[], int n){
	struct Node *last, *t;
	first = new Node;
	first->data - A[0];
	first->next = NULL;
	last = first;
	for(int i =1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last =t;
		
	}
}
int mid(struct Node *f){
	struct Node *q, *p;
	p = q = f;
	while(q){
		p = p->next;
		q = q->next;
		if(q){
			q=q->next;
		}
		if(q){
			p = p->next;
		}
	}
	cout<<p->data;
	
}

int main(){
	int A[] = {2, 3, 4, 5, 6};
	create(A, 5);
	struct Node *p;
	cout<<mid(first);
	
}
