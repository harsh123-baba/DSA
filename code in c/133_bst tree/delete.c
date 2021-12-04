#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root = NULL;

void insert(int key)
{
    struct Node *t = root;
    struct Node *p, *r;
    if(root==NULL)
    {
        p = (struct Node*)malloc(sizeof(struct Node ));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while(t!=NULL)
    {
        r = t;
        if(key<p->data)
        {
            t = t->lchild;
        }
        else if (key>p->data)
        {
            t = t->rchild;
        }
        else{
            return;

        }

    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key<r->data){
        r->lchild= p;
    }
    else{
        r->rchild = p;
    }
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
struct Node *Search(int key)
{
    struct Node *t = root;
    while (t != NULL)
    {
        if (t->data == key)
        {
            return t;
        }
        else if (t->data > key)
        {
            t = t->rchild;
        }
        else
        {
            t = t->lchild;
        }
    }
    return NULL;
}

int Height(struct Node *p)
{
    int x,y;
    x = y =0;
    if(p==NULL){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node * inpre(struct Node*p)
{
    while(p && p->rchild!=NULL)
    {
        p = p->rchild;
    }
    return p;
}
struct Node * insucc(struct Node *p)
{
    while(p && p->lchild !=NULL)
    {
        p = p->lchild;
    }
    return p;
}
struct Node * delete(struct Node *p, int key)
{
    struct Node *q;
//jb akela root hi ho pure tree m
    if(p==NULL)
    {
        return NULL;
    }
    if(p->lchild==NULL && p->rchild == NULL)
    {
        if(p == root)
        {
            root = NULL;
        }
        free(p);
        return NULL;
    }

    if(key<p->data)
    {
        p->lchild = delete(p->lchild, key);
    }
    else if(key>p->data)
    {
        p->rchild =delete(p->rchild, key);
    }
    else
    {
        if(Height(p->lchild)>Height(p->rchild))
        {
            q = inpre(p->lchild);
            p->data= q->data;
            p->lchild = delete(p->lchild, q->data);
        }
        else
        {
            q = insucc(p->rchild);
            p->data= q->data;
            p->rchild = delete(p->rchild, q->data);
        }

    }
return p;
}

int main()
{
    struct Node *temp;
    insert(20);
    insert(7);
    insert(10);
    insert(40);
    insert(9);
    delete(root, 20);
    inorder(root);
    printf("\n");
    temp = Search(20);
    if (temp != NULL)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not in tree");
    }
    return 0;
}
