#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#ifndef queue_h
#define queue_h
using namespace std;


class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;
};
class Queue{
    private:
        int front ;
        int rear;
        int size;
        Node **Q;

    public:
        Queue(){
            front = rear = -1;
            size = 10;
            Q = new Node*[size];
        }
        Queue(int size){
            front = rear = -1;
            this->size = size;
            Q = new Node*[this->size];
        }
        void enqueue(Node *x);
        Node * dequeue();
        int isEmpty();
};

void Queue::enqueue(Node *x)
{
    if(rear == size-1){
        cout<<"Queue is full";
    }
    else{
        rear++;
        Q[rear] = x;
    }
}
Node *Queue::dequeue(){
    Node *x = NULL;
    if(front ==rear){
        cout<<"Queue is Empty already";
    }
    else{
        x = Q[front++];
        front++;
    }
    return x;
}
int Queue::isEmpty(){
    return front == rear;
}


#endif