#include<iostream>
#include "queue1.h"
#include "stack1.h"
using namespace std;

class Tree
{
public:
    Node *root = NULL;
    Tree()
    {
        root = NULL;
    }
    void Tcreate();
    int count(Node *p);
};

void Tree ::Tcreate()
{
    Node *p, *t;
    int x;
    Queue q(100);
    root = new Node;
    cout << "Enter the root value : ";
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter the left child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout << "Enter the right child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

int Tree::count(Node *root)
{
    
    
    if(root)
    {
        return count(root->lchild) + count(root->rchild) + 1;
    }
    
    return 0;
}

int main()
{

    Tree t;

    t.Tcreate();
    cout<<t.count(t.root);
}