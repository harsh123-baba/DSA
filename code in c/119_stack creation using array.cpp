#include<stdio.h>
#include<iostream>
using namespace std;

struct Stack{
	int size;
	int top;
	int *S;
	
}*st;

void create(struct Stack *st){
	cin>>st->size;
	st->top = -1;
	st->S = new int[st->size];
}


void display(struct Stack st){
	for(int i = st.top; i>=0; i--){
		cout<<st.S[i]<<" ";
	}
	cout<<"\n";
}

void push(struct Stack *st, int x){
	if(st->top== st->size){
		cout<<"Stack overflow\n";
		
	}
	else{
		st->top++;
		st->S[st->top] = x;
	}
}

int pop(struct Stack *st){
	int x;
	if(st->top== -1){
		cout<<"Stack Underflow\n";
	}
	else{
		
		x = st->top;
		st->top--;
	}
	return x;
}


int main(){
	struct Stack st;
	create(&st);
	push(&st, 10);
	push(&st, 20);
	push(&st, 30);
	push(&st, 40);
	push(&st, 50);
	display(st);
	pop(&st);
	pop(&st);
	display(st);
	cout<<st.top<<"\n";

	cout<<st.size;
}
