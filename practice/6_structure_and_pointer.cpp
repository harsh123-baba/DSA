#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;

};
int main(){
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    cout<<r.length<<" "<<r.breadth<<"\n";
    p->length = 15;
    cout << r.length << " " << r.breadth << "\n";
    
    }