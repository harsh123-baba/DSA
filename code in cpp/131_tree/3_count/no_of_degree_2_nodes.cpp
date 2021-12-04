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
    int deg_2(Node *x);
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

int Tree :: deg_2(Node *root)
{
    int x, y;
    x = y = 0;
    if(root){
        x = deg_2(root->lchild);
        y = deg_2(root->rchild);
        if(root->rchild && root->lchild)
        {
            return x+y+1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}

int main()
{
    Tree t;
    t.Tcreate();
    cout<<t.deg_2(t.root);

}