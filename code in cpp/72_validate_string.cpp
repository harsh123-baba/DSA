#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i;
	char A[] = "Harsh123";
	for(i =0; i<8; i++){
		if((A[i]>=65 && A[i]<=90) || (A[i]>=97 &&A[i]<=122) || (A[i]>=0 && A[i]<=9)){
			cout<<"String is valid";
			break;
		}
		else{
			cout<<"String is not valid";
			break;
		}
	}
}
