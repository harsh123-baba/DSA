#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int A[10] = {3, 7, 15, 15, 15, 6, 11, 11, 2, 10};
	int H[16]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	
	for(int i= 0; i<9 ; i++){
		H[A[i]]++;
	}
	for(int i= 0; i<16; i++){
		if(H[i]>1){
			cout<<i<<" "<<H[i]<<"\n";
		}
	}


}
