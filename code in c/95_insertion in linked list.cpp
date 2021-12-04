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

int count(struct Node *p){
	int c=0;
	while(p){
		c++;
		p = p->next;
	}
	return c;
}

int max(struct Node *p){
	int max = -32768;
	while(p){
		if(p->data >max){
			max = p->data;
			
		}
		p = p->next;

	}
	return max;
}


int min(struct Node *p){
	int m = 32768;
	while(p){
		if(p->data<m){
			m = p->data;
			
		}
		p=p->next;
	}
	return m;
}

int sum(struct Node *p){
	int sum =0;
	while(p){
		sum+=p->data;
		p = p->next;
	}
	return sum;
}

int search(struct Node *p, int key){
	while(p){
		if(key==p->data){
			return 1;
		}
		else{
			p = p->next;
		}
		
	}
	return NULL;
}


void insert(int pos, int val){
	struct Node *t, *p;
	if(pos==0){
		t = new Node;
		t->data = val;	
		t->next = first;
		first = t;	
	}
	else{
		int i;
		p = first;
		for(i =0; i<pos-1; i++){
			p = p->next;
		}
		if(p)
		{
			t = new Node;
			t->data = val;
			t->next = p->next;
			p->next = t;
		}
	}
}

int main(){
	insert(0, 1);
	insert(1, 2);
	insert(2, 3);
	insert(3, 4);
	insert(4, 88);
	display(first);
}
