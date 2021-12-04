#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle()
    {
        length = 10;
        breadth = 15;

    }
    Rectangle(int l , int b)
    {
        length = l;
        breadth = b;

    }
    void Change_length(int l)
    {
        length = l;
    }   
    void Change_breadth(int b)
    {
        breadth = b;

    }
    int area()
    {
        return length*breadth;
    }
};



int main()
{
    Rectangle r(10, 5);
    cout<<r.area();
    r.Change_length(15);

}