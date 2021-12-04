#include<stdio.h>
#include<iostream>
using namespace std;
int fact(int n){
	if(n == 0){
		return 1;
	}
	
	else{
	return fact(n-1)*n;
	}	
}
int ncr(int n , int r){
	int num, den;

	num = fact(n);
	den = fact(r)*fact(n-r);
	return num/den;
	
}
int c(int n , int r){
	if(n == r|| r==0){
		return 1;
	}
	else {
		c(n-1, r-1)+c(n-1, r);
	}
}

int main(){
	cout<< ncr(2,2)<<"\n";
	cout<< c(2, 2);
}
