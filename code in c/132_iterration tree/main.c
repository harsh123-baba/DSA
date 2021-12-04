#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
#include"stack.h"

struct Node *root = NULL;

void Tcreate(){
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

void preorder(struct Node *p){
    struct Stack stk;
    createstack(&stk, 100);
    while(p || !isEmptyStack(stk))
    {
        if(p)
        {
            printf("%d ", p->data);
            push(&stk, p);
            p = p->lchild;
        }
        else{
            p = pop(&stk);
            p = p->rchild;
        }
    }
}

// void postorder(struct Node *p)
// {
//     struct Stack stk;
//     createstack(&stk, 100);
//     while(p || !isEmptyStack(stk))
//     {
//         if(p){
//             push(&stk, p);
//             p = p->lchild;
//         }
//         else{
            
//             p = pop(&stk);
//             p = p->rchild;
            
//             printf("%d ", p->data);
//         }
//     }
// }

void inorder(struct Node *p)
{
    struct Stack stk;
    createstack(&stk, 100);
    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}
int main()
{
    Tcreate();
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);

    return 0;
}