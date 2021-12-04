#include<stdio.h>
#include<iostream>
using namespace std;

void swap(char a, char b){
	char temp;
	temp = a;
	a= b;
	b = temp;
}
void perm(char s[], int l , int h){
	int i;
	if(l ==h){
		cout<<s;
	}
	else{
		for(i = l; i<=h; i++){
			swap(s[l], s[i]);
			perm()
		}
	}
}
