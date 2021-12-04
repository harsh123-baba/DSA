#include <iostream>
#include <stdio.h>
#include "stack1.h"
#include "queue1.h"
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
    void Postorder(Node *x);
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

void Tree ::Postorder(Node *p)
{

    Stack stk(100);
    while (p || !stk.isEmptyStack())
    {
        if (p)
        {
            
            stk.Push(p);
            p = p->lchild;
            
        }
        else
        {
            stk.Push(p);
            p = p->rchild;
            p = stk.Pop();
            cout << p->data << " ";
        }
    }
}

int main()
{

    Tree t;

    t.Tcreate();
    t.Postorder(t.root);
}
