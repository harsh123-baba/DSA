#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int A[5];
	sizeof(A);
	A[0] = 1;
	A[1] = 50;
	A[2] = 45;
	A[3] = 53;
	A[4] = 34;
	cout<<sizeof(A)<<endl;
	for(int i = 0; i<5; i++ ){
		cout<<A[i]<<endl;
	}
}
