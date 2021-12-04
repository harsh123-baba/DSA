#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;
    
};

class Tree
{
    public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    Node * Rinsert(Node *p, int key);
    void Preorder(Node *p);
    Node * Delete(Node *p, int key);
    int Height(Node *p);
    Node * InPre(Node *p);
    Node * InSucc(Node *p);
    void inorder(Node *p);
};

Node * Tree :: Rinsert(Node *p, int key)
{
    Node *t = NULL;
    if(p==NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key<p->data)
    {
        p->lchild = Rinsert(p->lchild, key);

    }
    else if(key>p->data)
    {
        p->rchild = Rinsert(p->rchild , key);

    }
    return p;
}


void Tree :: Preorder(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Preorder(p->lchild);
        Preorder(p->rchild);     
    }
}

int Tree :: Height(Node *p)
{
    int x, y;
    if(p==NULL)
    {
        return 0;
    }
    x= Height(p->lchild);
    y = Height(p->rchild);
    return x>y?x+1:y+1;
}



Node * Tree :: InPre(Node *p)
{
    while(p && p->lchild!=NULL)
    {
        p = p->lchild;
    }
    return p;
}


Node * Tree:: InSucc(Node *p)
{
    while(p &&p->rchild!=NULL)
    {
        p = p->rchild;
        
    }
    return p;
}


Node * Tree :: Delete(Node *p, int key)
{
    Node *q;
    if(p==NULL)
    {
        return NULL;
    }
    if(!p->lchild && !p->rchild)
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
        p->lchild = Delete(p->lchild, key);
    }
    else if(key>p->data)
    {
        p->rchild = Delete(p->rchild , key);
    }
    //Now key is found and now time to delete and rearrange whole tree IN BST MANNNER
    else
    {
        if(Height(p->lchild)>Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else{
            q = InSucc(p->rchild);
            p->data= q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

void Tree ::inorder(Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

int main()
{
    Tree t;
    t.root = t.Rinsert(t.root, 12);
    //t.Rinsert(t.root, 1);
    t.Rinsert(t.root, 10);
    t.Rinsert(t.root, 15);

    t.Rinsert(t.root, 9);
    t.Rinsert(t.root, 11);
    t.Rinsert(t.root, 16);
    //t.Delete(t.root, 2);

    t.Rinsert(t.root, 17);

    t.inorder(t.root);
    cout<<"\n";
    t.Preorder(t.root);
}