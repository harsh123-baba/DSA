#include<iostream>

using namespace std;

class Node 
{
    public:
    int data;
    Node *lchild;
    Node *rchild;
};

class Tree
{
    public:
    Node *root = NULL;
    Tree()
    {
        root = NULL;
    }
    Node * Rinsert(Node *p, int key);
    void preorder(Node *root);     
};

Node* Tree::Rinsert(Node *p , int key)
{
    Node *t=NULL;
    if(p==NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild= NULL;
        return t;
    }
    if(key<p->data)
    {
        p->lchild = Rinsert(p->lchild, key);
    }
    else if(key>p->data)
    {
        p->rchild = Rinsert(p->rchild ,key);
    }
    return p;
}

void Tree::preorder(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

int main()
{
    Tree t;
    //Node *root;
    t.root = t.Rinsert(t.root, 1);
    //t.Rinsert(t.root, 1);
    t.Rinsert(t.root, 2);
    t.Rinsert(t.root, 3);
    t.preorder(t.root);
}
