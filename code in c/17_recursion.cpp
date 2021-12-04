#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int x){
	if(x>0){
		printf("%d ", x);
		fun(x-1);
		
	}
}
int main(){
	int x = 3;
	fun(x);
}

