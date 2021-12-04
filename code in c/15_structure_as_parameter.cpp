#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
	
};

// Call by value
int area(struct Rectangle r1){
	return r1.length*r1.breadth;
	
}
//call by refrences
int changelength(struct Rectangle &r1){
	r1.length++;
}

int main(){
	struct Rectangle r = {10, 5};
	changelength(r);
	cout<<area(r);
}
