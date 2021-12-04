//try again

#include<stdio.h>
#include<iostream>
#include<strings.h>
using namespace std;

struct Node{
	char data;
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
	char x=-1;
	if(top == NULL){
		cout<<"stack is underflow";
	}
	else{
		t= top;
		top = top->next;
		x = t->data;
		delete t;
	}
	return x;
}


int Balanced(char *exp){
	int i;
	for(i =0; exp[i]!='\0'; i++){
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

int isOperand(char x){
	if(x=='+'|| x=='-'||x=='/'||x=='*'){
		return 0;
	}
	else{
		return 1;
	}
}


int pre(char x){
	if(x=='+' || x=='-'){
		return 1;
	}
	else if(x=='*'||x=='/'){
		return 2;
	}
	else{
		return 3;
	}
}

char * intoPost(char *infix){
	int i=0, j=0;
	int len = strlen(infix);
	char *postfix;
	postfix = new char[len+2];
	while(infix[i]!='\0'){
		if(pre(infix[i])>pre(top->data)){
			push(infix[i++]);
		}
		else{
			postfix[j++] = pop();
		}
	}
	while(top!= NULL){
		postfix[j++] = pop();
		
	}
	postfix[j] = '\0';
	return postfix;
}


int main(){
	char *infix="a+b*c-d/e";
	push('#');
	char *postfix = intoPost(infix);
	printf("%s ",postfix);
 	return 0;
	
	
}
