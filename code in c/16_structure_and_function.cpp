#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};
void init(struct Rectangle *r, int l, int b){
	r->length = l;
	r->breadth = b;
	
}
int area(struct Rectangle r){
	return (r.length*r.breadth);
}
void changelength(struct Rectangle *r, int len){
	r->length = len;
}


int main(){
	struct Rectangle r;
	init(&r, 10, 25);
	cout<<area(r)<<"\n";
	changelength(&r, 20);
	cout<<area(r);
}
