#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


void set(struct array *arr,int index,int x){
	if(index>= 0 && index<arr->length){
		arr->a[index]  = x;
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
	struct array arr = {{1, 2, 3, 4, 5}, 10, 5};
	set(&arr, 3, 22);
	display(arr);
}
