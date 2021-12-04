#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int p = 10;
    
    int *a = &p;
    cout<<a<<"\n";
    cout << p << "\n";
    cout << *a << "\n";
    cout << &p << "\n";
}