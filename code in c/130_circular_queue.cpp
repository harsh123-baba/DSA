#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x){
    if((q->rear+1)%q->size == q->front){
        cout<<"Queue is full";
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){
    int x=-1;
    if(q->front == q->rear){
        cout<<"Queue is Empty";
    }
    else{
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q){
    int i = (q.front+1);
    do{
        cout<<q.Q[i]<<" ";
        i =(i+1)%q.size;

    }while(i!=(q.rear+1)%q.size);
    cout<<"\n";
}


int main(){
    struct Queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    //enqueue(&q, 40);
    display(q);
    cout << dequeue(&q)<<"\n";
    cout << dequeue(&q)<<"\n";
    cout << dequeue(&q)<<"\n";
//    display(q);
}