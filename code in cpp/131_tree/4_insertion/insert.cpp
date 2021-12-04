#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *lchild;
    Node *rchild;
};

class Tree{
    public:
    Node *root = NULL;
    Tree(){
        root = NULL;
    }
    void insert(Node *root ,int key);
    void preorder(Node *root);

};


void Tree:: insert(Node *root, int key)
{
    Node *t = root;
    Node *r , *p;
    if(root == NULL)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        {
            t = t->lchild;
        }
        else if(key > t->data)
        {
            t = t->rchild;
        }
        else{
            return ;
        }
    }
    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key<r->data)
    {
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }
}


void Tree:: preorder(Node *root)
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
    t.insert(t.root, 1);
    t.insert(t.root, 2);
    t.insert(t.root, 3);
    t.preorder(t.root);

}