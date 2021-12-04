#include<iostream>
#include<stdio.h>
#include"queue.h"
using namespace std;

class Tree
{
    public:
        Node *root;
        Tree(){
            root = NULL;
        }
        void Tcreate();
        void preorder(Node *p);

};
void Tree::Tcreate(){
    Node *p, *t;
    Queue q(100);
    int x;
    cout<<"Enter the root value : ";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while(!q.isEmpty()){
        p = q.dequeue();
        cout<<"Enter the left child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
    }
    cout<<"Enter the right child of "<<p->data<<" : ";
    cin>>x;
    if(x!=-1){
        t = new Node;
        t->data = x;
        t->lchild = t->rchild = NULL;
        p->rchild = t;
        q.enqueue(t);

    }

}



void Tree :: preorder(struct Node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main(){

    Tree t;

    t.Tcreate();
    t.preorder(t.root);

}