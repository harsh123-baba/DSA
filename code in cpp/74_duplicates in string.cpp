#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int i, j , count=1;
	char A[] = "finding";
	
	for(i=0;A[i]!='\0';i++){
		count = 1;
		if(A[i]!=0){
		
			for(j = i+1; A[i]!='\0';j++){
				if(A[i] == A[j]){
					count++;
					A[j] =0;
				}
			}
		}
		if(count>1){
			cout<<A[i]<<" "<<count;
		}
	}
}

