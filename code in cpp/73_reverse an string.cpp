#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int i, j;
	char A[] = "shipra";
	char B[6];
	int count = 0;
	while(A[count]!='\0'){
		count++;
	}
	j = count-1;
	for(i= 0; i<count;i++){
		B[i] = A[j];
		j--;
	}
	B[i] = '\0';
	cout<<B;
}



