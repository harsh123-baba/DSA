// In head recursion all the operation will execute at return time

#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int x){
	if(x>0){
		fun(x-1);
		printf("%d ", x);
	}
}
int main(){
	int x = 3;
	fun(x);
}

