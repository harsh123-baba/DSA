#include<stdio.h>
#include<iostream>
using namespace std;

struct Complex{
	int real;
	int img;
};
int main(){
	struct Complex c = {10, 5};
	cout<<"Complex no is "<<c.real<<" + j"<<c.img<<endl;
}
