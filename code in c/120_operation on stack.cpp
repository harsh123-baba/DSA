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

int isEmpty(struct Stack st){
	if(st.top == -1){
		return 1;
	}
	else{
		return 0;
		
	}
}

int isFull(struct Stack st){
	if(st.top == st.size){
		return 1;
	}
	else{
		return 0;
	}
}

int peek(struct Stack st, int pos){
	int x;
	if(st.top-pos+1<0){
		cout<<"Invalid Position";
	}
	else{
		x = st.S[st.top-pos+1];
	}
	return x;
}

int stacktop(struct Stack st){
	if(st.top == -1){
		return -1;
	}
	else{
		return st.S[st.top];
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
	pop(&st);
	pop(&st);
	pop(&st);
	cout<<isEmpty(st)<<"\n";
	push(&st, 10);
	push(&st, 20);
	push(&st, 30);
	push(&st, 40);
	push(&st, 50);
	cout<<isFull(st)<<"\n";
	
	cout<<stacktop(st)<<"\n";
	display(st);
	cout<<peek(st, 4)<<"\n";
	
	//cout<<st.size;
}
