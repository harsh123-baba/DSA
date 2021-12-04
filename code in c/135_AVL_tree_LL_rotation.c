#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *lchild;
    struct Node *rchild;
    int data;
    int height;
}*root = NULL;

int NodeHeight(struct Node *p)
{
    int hl, hr;
    // if(p && p->lchild)
    // {
    //     hl = p->lchild->height;
    // }
    // else
    // {
        
    // }
    hl = p &&p->lchild ? p->lchild->height:0;
    hr = p&&p->rchild ? p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}

int BalanceFactor(struct Node *p)
{
    int hl , hr;
    hl = p&&p->lchild ?p->lchild->height :0;
    hr = p&&p->rchild ? p->rchild->height:0;
    return hl-hr;
}

struct Node * LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;
    //make diagram to resolve this issue
    pl->rchild = p;
    p->lchild = plr;
    //plr remain on same height but 
    //p and pl changes their height;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);


    if(root == p )
    {
        root = pl;
    }
    return pl;
}

struct Node *LRRotation(struct Node *p)
{
    return NULL;
}

struct Node *RLRotation(struct Node *p)
{
    return NULL;
}
struct Node *RRRotation(struct Node *p)
{
    return NULL;
}

struct Node *Rinsert(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = Rinsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Rinsert(p->rchild, key);
    }
    p->height = NodeHeight(p);
    //now we must know the balance factors to perform rotation and as well to see the efficiency of that tree
    //cheak balance factor of each and every Node and getting?
    //weather to perform LL or LR etc..
    //LL k lye krege idhr

    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
    {
        //then we have to perform LL rotation
        return LLRotation(p);
    }
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
    {
        //then we have to perform LR rotation
        return LRRotation(p);
    }
    else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
    {
        //then we have to perform RL rotation
        return RLRotation(p);
    }
    else if(BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
    {
        //then we have to perform LL rotation
        return RRRotation(p);
    }

    return p;
}


int main(){
    //ll
    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 2);
    return 0;
}




