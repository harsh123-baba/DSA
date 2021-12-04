#include<stdio.h>


struct Complex
{
    int real;
    int img;
};



int main()
{

    struct Complex c1 = {10, 5};
    struct Complex c2 = {30, 40};
    printf("%d + j%d", c1.real+c2.real, c1.img+c2.img);
}