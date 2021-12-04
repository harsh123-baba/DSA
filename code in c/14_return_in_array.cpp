#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int * Array(int n){
	int *p;
	p = (int *) malloc(n*sizeof(int));
	return p;
}
int main(){
	int *A;
	A = Array(5);
	A[0] = 1;
	A[1] = 2;
	A[2] = 3;
	A[3] = 4;
	A[4] = 5;
	for(int i = 0; i<5; i ++){
		cout<<A[i]<<"\n";
	}
}
