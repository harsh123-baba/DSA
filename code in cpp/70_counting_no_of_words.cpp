#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i, word = 0;
	char A[] = "How are   you";
	for(int i =0; A[i]!='\0'; i++){
		if((A[i] ==' ') && (A[i-1]!=' 
		')){
			word +=1;
		}
	}
	cout<< "No of words are : "<<word+1;
}
