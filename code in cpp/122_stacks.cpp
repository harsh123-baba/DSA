#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
class Stack{
	private:
		Node *top;
		
	public:
		Stack(){
			top == NULL;
		}
		void push(int x);
		int pop();
		void Display();
		
};

void Stack :: push(int x){
	Node *t = new Node;
	if(t== NULL){
		cout<<"Stack is Full";
	}
	else{
		t->data = x;
		t->next = top;
		top = t; 
	}
}

int Stack :: pop(){
	int p , x=-1;
	if(top == NULL){
		cout<<"Stack is Empty";
	}
	else{
		x=top->data;
		Node *t=top;
		top=top->next;
		delete t;
	}
	return x;
}

void Stack :: Display(){
	Node *t = top;
	while(t!=NULL){
		cout<<t->data<<" ";
		t = t->next;
	}
	cout<<"\n";
}


int main(){
	Stack st;
	st.push(10);
	st.push(20);
	st.push(22);
	st.Display();
	cout<<st.pop();
}
