#include<stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
};
int main(){
    struct Rectangle r;
    r.length = 10;
    r.width = 20;
    cout<<"Area of a rectangle is : "<<r.length*r.width;
}