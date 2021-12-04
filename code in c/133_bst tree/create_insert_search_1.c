#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root = NULL;

void insert(int key)
{
    struct Node *t  = root;
    struct Node *p, *r;
    if(root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;        
    }
    while(t!= NULL)
    {
        r = t;
        if(key<t->data)
        {
            t = t->lchild;
        }
        else if(key>t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }

    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key<r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->rchild = p;
    }
}


void inorder(struct Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d \n", p->data);
        inorder(p->rchild);
    }
    
}
struct Node * Search(int key)
{
    struct Node *t = root;
    while(t!=NULL)
    {
        if(t->data==key)
        {
            return t;
        }
        else if(t->data>key)
        {
            t= t->rchild;
        }
        else
        {
            t = t->lchild;
        }
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    insert(20);
    insert(7);
    insert(10);
    insert(40);
    insert(9);

    inorder(root);
    printf("\n");
    temp = Search(20);
    if(temp != NULL){
        printf("Element is found");
    }
    else{
        printf("Element is not in tree");
    }
    return 0;
}


