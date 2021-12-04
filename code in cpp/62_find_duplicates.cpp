// can solve this using hash table

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i , j=0;
	int A[10] = {3, 6, 8, 8, 12, 15, 15, 15, 20};
	for(i=0; i<9; i++){
	
		if(A[i] ==A[i+1]){
			j= i+1;
			while(A[j]== A[i]){
				j++;
			}
			cout<<A[i]<<" "<<j-i<<"\n";
			i= j-1;
		}
	}
}
