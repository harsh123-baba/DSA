// error in putput 

// b value is null value : found


#include<stdio.h>
#include<iostream>
using namespace std;

void swap(int &x,int &y){
	int temp;
	x = temp;
	x = y;
	y = temp;
	
}
int main(){
	int a; 
	int b;
	a = 10;
	b = 20;
	swap(a, b);
	cout<<"a : "<<a<<" b : "<<b;
	
	
}
