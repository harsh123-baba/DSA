#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int A[10] = {3, 7, 15, 15, 15, 6, 11, 11, 2, 10};
	int i;
	int count, j;
	//int H[15];
	for(i =0; i<9; i++){
		count = 1;
		if(A[i] != -1){
			for(j = i+1; j<10; j++){
				if(A[i]==A[j]){
					count++;
					A[j]=-1;
				}			
			}		
		if(count>1){
			cout<<A[i]<<" "<<count<<"\n";		
		}
		}
		
	}
}
