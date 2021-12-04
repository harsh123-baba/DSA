#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*front = NULL, *rear= NULL;

void enqueue(int x){
    struct Node *t;
    t = new Node;
    if(t == NULL){
        cout<<"Queue is full";
    }
    else{
        t->data=x;
        t->next = NULL;
        if(front == NULL){
            front = rear =t;
        }
        else{
            rear->next=t;
            rear = t;
        }
    }
}


int dequeue(){
    int x=-1;
    struct Node *p;
    if(front ==NULL){
        cout<<"Queue is empty";
    }
    else{
        p = front;
        front = front->next;
        x = p->data;
        delete p ;

    }
    return x;
}

void display(){
    int i;
    struct Node *p=front;
    while (p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<"\n";
    
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
}