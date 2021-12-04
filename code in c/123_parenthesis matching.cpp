#include<stdio.h>
#include<iostream>
using namespace std;
struct Stack{
	int size;
	int top;
	int *S;
}*top = NULL;

void push(struct Stack *st, int x){
	if(st->top == st->size){
		cout<<"Stack is full";
	}
	else{
		st->top++;
		st->S[st->top] = x;
	}
	
	
}
int pop(struct Stack *st){
	int x;
	if(st->top== -1){
		cout<<"Stack is underflow";
	}
	else{
		x = st->S[st->top];
		st->top--;
	}
}

int isEmpty(struct Stack st){
	if(st.top == -1){
		return 1;
	}
	return 0;
}

int isBalanced(char *exp){
	struct Stack st;
	for(int i =0; exp[i]!='/0'; i++){
		if(exp[i]=='('){
			push(&st, exp[i]);
		}
		else if(exp[i]==')'){
			if(isEmpty(st)){
				return false;
			}
			else{
				pop(&st);
			}
		}
		
	}
	if(st.top == -1){
		return 1;
	}
	else{
		return 0;
	}
}





int main(){

	char *exp="((a+b)*(c-d)))";
	cout<<isBalanced(exp); 
	return 0;
}


