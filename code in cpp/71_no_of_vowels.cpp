#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char A[] = "How are you";
	int i, vcount =0, ccount= 0;
	for(i = 0; i<12; i++){
		if(A[i]=='a' || A[i] =='e' || A[i] =='i' || A[i] =='o' || A[i] =='u' 
		|| A[i] =='A'|| A[i] =='E'|| A[i] =='I'|| A[i] =='O'|| A[i] =='U'){
			vcount++;
		}
		
		else if ((A[i]>=97 && A[i]<=122 ) ||(A[i]>=65 && A[i]<=90)){
			ccount++;
		}
	}
	cout<<"No of consonents : "<<ccount<<"\n";
	cout<<"No of vowels : "<<vcount;
}
