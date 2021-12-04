#ifndef stack_h
#define stack_h

#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
struct Stack{
    int top;
    int size;
    struct Node **S;
};


void createstack(struct Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->S = (struct Node **)malloc(st->size*sizeof(struct Node *));

}

void push(struct Stack *st, struct Node *x)
{
    if(st->top==st->size-1)
    {
        printf("Stack is full");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
        
    }
}
struct Node * pop(struct Stack *st){
    struct Node *x = NULL;
    if(st->top == -1){
        printf("Stack is underflow");
    }
    else{
        x = st->S[st->top--];
    }
    return x;
}

int isEmptyStack(struct Stack st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}
int fullStack(struct Stack st){
    return st.top == st.size-1;
}


#endif 