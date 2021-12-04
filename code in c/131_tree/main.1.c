#include<stdio.h>
#include<stdlib.h>
#include"queue1.h"

struct Node *root = NULL;
void Tcreate()
{
    struct Node *p , *t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Enter the root value : ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while(!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter the left child of %d ", p->data);
        scanf("%d", &x);
        if(x!=-1)
        {
            t =(struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter the right child of %d : ", p->data);
        scanf("%d", &x);
        if(x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }

    }

}


void preorder(struct Node *p)
{
    if(p){
    printf("%d ", p->data);
    preorder(p->lchild);
    preorder(p->rchild);
    }
}

int main()
{
    Tcreate();
    preorder(root);
    return 0;
}




