// 2 power n is complexity to solve such problem

#include<iostream>
#include<stdio.h>
using namespace std;

void funb(int n);
void funa(int x){
	if(x>0){
		printf("%d ", x);
		funb(x-1);
	}
}
void funb(int x){
	if(x>0){
		printf("%d ", x);
		funa(x/2);
	}
}
int main(){
	int x = 30;
	funa(x);
}

