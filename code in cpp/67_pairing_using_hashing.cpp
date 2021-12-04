#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i;
	int k = 10;
	int A[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
	int H[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i=0; i<14; i++){
		H[A[i]]++;
	}
	for(int i = 0; i<14; i++){
		if(H[k-A[i]]!=0 ){
			cout<<A[i]<< " + "<<k-A[i]<< " = "<< k<<"\n";	
		}
		H[A[i]]++;
		
	}	

}
