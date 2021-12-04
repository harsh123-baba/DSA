#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char A[] = "finding";
	int i, h=0,x=0;
	for(i =0; A!='\0'; i++){
		x=1;
		x = x<<A[i]-97;
		if(x &h >0){
			cout<<A[i]<<" is duplicated";
			
		}
		else{
			h = x|h;
		}
	}
}
