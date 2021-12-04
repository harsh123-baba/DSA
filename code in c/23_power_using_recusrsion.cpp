#include<iostream>
#include<stdio.h>
using namespace std;
int power(int m , int n){
	if(n == 0){
		return 1;
	}
	else{
		return power(m , n-1)*m;
	}
}

int short_power(int m , int n){
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		return short_power(m*m, n/2);
		
	}
	else{
		return short_power(m*(m*m), (n-1)/2);
	}
}
int main(){
	int m , n;
	cout<< power(2, 10)<<"\n";
	cout<<"smart way less calculation result : "<< short_power(2, 10);
}
