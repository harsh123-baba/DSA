#include<stdio.h>
#include<stdlib.h>
#include"chain.h"

int hash(int key) 
{   
    return key%10;
}
void Insert(struct Node *H[], int key)
{
    int index = hash(key);
    SortedInsert(&H[index], key);
}
int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for(int i=0; i<10; i++)
    {
        HT[i] = NULL;
    }
    Insert(HT, 12);
    Insert(HT, 13);
    Insert(HT, 1);
    Insert(HT, 2);
}



