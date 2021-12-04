#include<stdio.h>

struct Rectangle
{
    int breadth;
    int length;
};

int area(struct Rectangle r)
{
    return r.breadth * r.length;
}

int main()
{
    struct Rectangle r ={10, 5};
    printf("%d ", area(r));

}