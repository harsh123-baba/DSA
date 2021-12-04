/* TODO (#1#): little bit confusion in outputs
               from honors  rule and tylor series */
#include<stdio.h>
#include<iostream>
using namespace std;

double e(int x, int n){
	static double s = 1;
	int i;
	if(n==0){
		return s;
	}
	else {
		s = 1+x*s/n;
	}
	return e(x, n-1);
}

int main(){
		cout<<e (1, 10);
}
