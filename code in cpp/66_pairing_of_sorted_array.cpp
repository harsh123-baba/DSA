#include<iostream>
#include<stdio.h>
using namespace std;
 
int main(){
	int i;
	
	int A[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
	i = 0;
	int k = 10;
	int j = 9;
	while(i<j){
		if(A[i]+A[j] == k){
			cout<<A[i] <<" + "<< A[j] << " = "<< k<<"\n";
			i++;
			j++;
		}
		else if(A[i]+A[j]<k){
			i++;
		}
		else{
			j--;
		}
	
	}
}
