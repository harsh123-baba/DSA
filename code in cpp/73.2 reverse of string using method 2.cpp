#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	char A[] = "harshit";
	int i, j, count;
	for(i =0, j = 6; i<j; i++ , j--){
		char temp;
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	cout<<A;
}
