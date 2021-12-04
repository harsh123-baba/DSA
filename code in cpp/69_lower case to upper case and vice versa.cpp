#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char A[] = {'H', 'A', 'R', 'S', 'H', 'I', 'T'};
//	char surname[] = "GOYAL";
	for(int i=0; i<7; i++){
		if(A[i]>=65 && A[i]<=90){
			A[i]+=32;
			
		} 
		else if(A[i]>=96 && A[i]<= 122){
			A[i]-=32;
			
		}
	}
	cout<<A;
	
}
