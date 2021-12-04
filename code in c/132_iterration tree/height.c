#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Node *root = NULL;

void Tcreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Enter the root value : ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter the left child of %d : ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("Enter the right child of %d : ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

int Height(struct Node *root){
    int x, y;
    x = y= 0;
    if(root==0){
        return 0;
    }
    else{

        x = Height(root->lchild);
        y = Height(root->rchild);
        if(x>y){
            return x+1;
        }
        else{
            return y+1;
        }
    }
}


int main()
{
    Tcreate();
    printf("%d", Height(root));
    return 0;
}