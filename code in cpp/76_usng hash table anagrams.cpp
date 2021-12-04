#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	char A[] = "decimal";
	char B[] = "medical";
	int count=0;
	int H[26] = {0};
	for(int i =0; A[i]!='\0'; i++){
		H[A[i]-97]++;
	}
	for(int i =0; B[i]!='\0'; i++){
		H[B[i]-97]--;
	}
	for(int i =0; i<26; i++){
		if(H[i]!=0){
			count++;
			break;
		}
	}
	if(count>0){
		cout<<"No";
	}
	else{
		cout<<"Yes";
	}
}
