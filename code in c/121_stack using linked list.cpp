#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*top=NULL;

void push(int x){
	struct Node *t;
	t = new Node;
	if(t == NULL){
		cout<<"Stack is FULL";
	}
	else{
		t->data = x;
		t->next = top;
		top= t;
	}
}


int pop(){
	int x=-1;
	struct Node *t;
	if(top==NULL){
		cout<<"Stack is NULL";
	}
	else{
		t= top;
		top = top->next;
		x = t->data;
		delete t;
	}
	return x;
}

void Display(){
	
	struct Node *p;
	p = top;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";	
}


int main(){
	push(10);
	push(20);
	push(30);
	push(80);
	Display();
	cout<<pop();	
}
