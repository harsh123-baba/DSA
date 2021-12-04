#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
	int len;
	int br;
	
};
int main(){
	struct Rectangle *p;
	p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
	p->len = 10;
	p->br = 5;
	cout<< p->len<<" "<<p->br;
}

