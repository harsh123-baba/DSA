#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}
	else {
		return sum(n-1)+n;
	}
	
}

int factorial(int n){
	if(n== 0 ){
		return 1;
		
	}
	else{
		return factorial(n-1)*n;
	}
}
int main(){
	
	cout <<"Sum is : "<<sum(10)<<"\n";
	cout<< "Factorial is : "<< factorial(5);
}
