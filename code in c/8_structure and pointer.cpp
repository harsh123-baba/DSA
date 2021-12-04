#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


struct Rectangle{
	int len;
	int br;
	
};
//Here we use pointer to change length

int main(){
	struct Rectangle r = {10, 5};
	struct Rectangle *p = &r;
	r.len = 10;
	r.br = 5;
	cout<<r.len<<"\n"<<r.br<<"\n";
	
	p->len=15;
	cout<<r.len;
}
