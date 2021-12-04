#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;

}*root = NULL;

struct Node * Rinsert(struct Node *p , int key)
{
    struct Node *t = NULL;
    if(p==NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key<p->data)
    {
        p->lchild = Rinsert(p->lchild,key);
    }
    else if(key> p->data)
    {
        p->rchild=Rinsert(p->rchild, key);
    }
    return p;
}

void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        printf("%d \n", p->data);
        inorder(p->rchild);
    }
}

int main()
{
    //struct Node *temp;
    root = Rinsert(root, 20);
    Rinsert(root, 7);
    Rinsert(root, 10);
    Rinsert(root, 40);
    Rinsert(root, 9);

    inorder(root);
    printf("\n");
    return 0;
}
