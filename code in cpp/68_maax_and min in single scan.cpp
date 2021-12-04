#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
	int A[] = {5, 8, 9, 2, 6, 10, 7, -1, 4};
	int min = A[0];
	int max = A[0];
	for(int i ; i<9; i++){
		if(A[i]>max){
			max = A[i];
		}
		else if (A[i]<min){
			min = A[i];
		}
	}
	cout<<"Max : "<< max<<"\n";
	cout<<"Min : "<< min<<"\n";
}
