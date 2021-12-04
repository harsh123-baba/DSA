#ifndef stack1_h
#define stack1_h
#include<stdio.h>
#include<iostream>
#include "queue1.h"
using namespace std;

class Stack
{
    public:
    int top;
    int size;
    Node **S;

    Stack()
    {
        size = 10;
        top = -1;
        S = new Node*[size];

    }
    Stack(int size)
    {
        this->size = size;
        top = -1;
        S = new Node*[this->size];
    }
    void Push(Node *x);
    Node * Pop();
    int isEmptyStack();
    int isFullStack();
};

void Stack :: Push(Node *x)
{
    if(top == size-1){
        cout<<"Stack Overflow";
    }
    else
    {
        top++;
        S[top] = x;
    }
}

Node * Stack :: Pop()
{
    Node *x = NULL;
    if(top == -1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        x = S[top--];
    }
    return x;
}

int Stack :: isEmptyStack()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }

}
int Stack :: isFullStack()
{
    if(top == size-1)
    {
        return true;
    }
    return false;
}

#endif