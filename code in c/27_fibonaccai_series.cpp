#include<stdio.h>
#include<iostream>

using namespace std;
int fib(int n){
	if(n<=1){
		return n;
		
	}
	else{
		return fib(n-2)+ fib(n-1);
		
	}
}

int fib2(int n){
	int t0= 0;
	int t1= 1;
	int s = 0;
	if(n<= 1){
		return n;
	}
	for(int i=2; i<n; i++){
		s = t0+t1;
		t0 = t1;
		t1 = s;
		
	}
	return s;
} 
int main(){
	cout<<fib2(5); 
	return 0;
	
}
