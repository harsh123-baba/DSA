// 2 power n is complexity to solve such problem

#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int x){
	if(x>0){
//		fun(x-1);
		printf("%d ", x);
		fun(x-1);
		fun(x-1);
	}
}
int main(){
	int x = 3;
	fun(x);
}

