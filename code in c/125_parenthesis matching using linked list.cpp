#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*top=NULL;

void push(char x){
	struct Node *t;
	t = new Node;
	if(t== NULL){
		cout<<"Stack overflow";
	}
	else{
		t->data = x;
		t->next = top;
		top = t;
	}
	
}

char pop(){
	struct Node *t;
	char x;
	if(top == NULL){
		cout<<"stack is underflow";
	}
	else{
		t= top;
		top = top->next;
		x = t->data;
		delete t;
	}
}


int Balanced(char *exp){
	int i;
	for(i =0; exp[i]!='/0'; i++){
		if(exp[i]=='('){
			push(exp[i]);
		}
		else if(exp[i]==')'){
			if(top==NULL){
				return 0;
			}
			else{
				pop();
			}
		}
	}
	if(top==NULL){
		return 1;
		
	}
	else{
		return 0;
	}
}


int main(){
	char *exp="((a+b)*(c-d)))";
 
 	printf("%d ",Balanced(exp));
 
 	return 0;
	
	
}
