#include<stdio.h>
#include<stdlib.h>

#ifndef chain_h
#define chain_h

struct Node 
{
    int data;
    struct Node *next;
}*first = NULL;


void SearchInsert(struct Node **H, int x)
{
    struct Node *t, *q = NULL;
    struct Node *p = *H;
    t = (struct Node *)malloc(sizeof(struct Node ));
    t->data = x;
    t->next = NULL;
    if(*H == NULL)
    {
        *H = t;
    }
    else
    {
        while(p && p->data <x)
        {
            q = p;
            p = p->next;
            if(p==first)
            {
                q->next = first;
                first = t;
            }
            else
            {
                t->next = q->next;
                q->next = t;
            }

        }
    }
}

struct Node * Search(struct Node *p, int key)
{
       while(p!=NULL)
       {
           if(key == p->data)
           {
               return p;
           }

       }
       p= p->next;
}
#endif




