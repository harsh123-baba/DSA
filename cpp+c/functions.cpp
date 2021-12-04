#include<iostream>
using namespace std;

void swap_by_val(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_by_add(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main()
{
    int a = 1;
    int b = 2;
    swap_by_val(a, b);
    printf("%d %d\n", a, b);
    swap_by_add(&a, &b);
    printf("%d %d", a, b);
}