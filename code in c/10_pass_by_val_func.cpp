#include<stdio.h>
#include<iostream>
using namespace std;
 //pass by value
 
 int swap(int x , int y){
 	int temp ;
 	temp = x;
 	x = y;
 	y = temp;
 	cout<< "x :" <<x<<" "<<"y : "<<y<<"\n";
 }
 
 
 int main(){
 	int a, b;
 	a = 10;
 	b = 5;
 	
 	swap(a, b);
 	
 	cout<< "b : "<<b<<" "<< "a : " << a;
 }
 
 //here we can see our output the actual parameter are not change
 
 // when to use : when user dont want to change the actual parameter
 
 
