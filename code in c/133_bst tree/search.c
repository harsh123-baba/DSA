#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root = NULL;
void insert(int key){
    struct Node *t= root;
    struct Node *r, *p;    //p for creating new node //r for p ka tail pointer...

    if(root==NULL){
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root=p;
        return;
    }
        while(t!=NULL){
            r=t;
            if(key<t->data){
                t = t->lchild;
            }
            else if(key>t->data){
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
            r->lchild = p;
        }
        else{
            r->rchild = p;
        }
    }

struct Node * search(int key){
    struct Node *t = root;
    while(t!=NULL){
        if(key == t->data){
            return t;
        }
        else if(key<t->data){
            t = t->lchild;
        }
        else{
            t = t->rchild;
        }
        
    }
    return NULL;
}


void inorder(struct Node *p){
    if(p){
        inorder(p->lchild);
        printf("%d \n", p->data);
        inorder(p->rchild);
    }
}



int main(){
    struct Node *temp;
    insert(30);
    insert(20);
    insert(10);
    insert(40);
    insert(50);
    insert(48);
    //printf("%d ", search(20));
    inorder(root);
    printf("\n");

    temp = search(20);
    if(temp != NULL){
        printf("element %d is found \n", temp->data);
    }
    else{
        printf("Element is not found\n");
    }
    

}


