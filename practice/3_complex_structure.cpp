#include<iostream>
#include<stdio.h>
using namespace std;

struct Complex{
    int real;
    int img;
};


int main(){
    struct Complex c1 = {10, 5};
    struct Complex c2 = {20, 5};
    cout<<"Addition of two complex numbers is : "<<c1.real+c2.real <<" + j"<<c1.img+c2.img;

}