#include<stdio.h>

void fun_by_val(int a , int b)
{
    //swap
    int temp;
    temp = a;
    a = b; 
    b = temp;
    printf("a: %d b: %d\n", a, b);
    
}

void fun_by_add(int *a, int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
    printf("a: %d  b: %d\n", a, b);
}



int main()
{
    int a=2, b=1;
    
    printf("%d", fun_by_val(a, b));
    
    printf("%d", (fun_by_add(&a, &b));

    printf("After call by address \n");
    printf("a: %d  b: %d\n", a, b);
}


