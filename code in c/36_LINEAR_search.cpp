#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};

void display(struct array arr){
	int i;
	cout<<"Elements are : "<<"\n";
	for(i = 0; i<arr.length; i++){
		cout<<arr.a[i]<<"\n";
	}
}
void linearsearch(struct array arr, int val){
	int i;
	for(int i = 0; i<arr.length; i++){
		if(arr.a[i]==val){
			cout<<"Element is at : "<<i<<"\n";
		}
		
	}
}
int main(){
	struct array arr = {{1, 2, 3, 4, 5}, 10, 5};
	linearsearch(arr, 3);
	display(arr);
}
