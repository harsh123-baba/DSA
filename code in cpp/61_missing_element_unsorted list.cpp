#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i;
	int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
	int H[12];
	for(i = 0; i<8; i++){
		H[A[i]]+=1;	
	}
	for(int i = 1; i<12; i++){
		if(H[i] == 0){
			cout<<i<<"\n";
		}
	}
}
