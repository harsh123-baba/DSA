#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};

void swap(int a, int b){
	int temp;
	temp = a;
	a= b;
	b = temp;
}

void rearrange(struct array *arr){
	int i=0 ;
	int j = arr->length-1;
	while(i<j){
		while(arr->a[i]<0)i++;
		while(arr->a[j]>=0)j--;
		if (i<j){
			swap(arr->a[i], arr->a[j]);
		}
	}
}


void display(struct array arr){
	int i;
	cout<<"Elements are : "<<"\n";
	for(i = 0; i<arr.length; i++){
		cout<<arr.a[i]<<"\n";
	}
}

int main(){
	struct array arr = {{1, -2, -3, 4, 5}, 10, 5};
	rearrange(&arr);
	display(arr);
}
