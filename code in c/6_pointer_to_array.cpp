#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int A[5] = {2, 4, 6, 9, 7};
	int *p;
	p = A;   // p = A why not p = &A bqs A is alredy address of array bro..
	for(int i=0; i<5 ; i++)
	{
		cout<<p[i]<<"\n";
	}
	
	for(int i=0; i<5 ; i++)
	{
		cout<<A[i]<<"\n";
	}	
}

