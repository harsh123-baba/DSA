#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int *p = new int[5];
	int *q = new int[5];
	for(int i = 0; i<5; i++){
		q[i] = p[i];
	}
	delete []p;
	p = q;
	q = 0;
}
