#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


void insert(struct array *arr, int index, int val){
	int i;
	
	if(index>=0 && index<=arr->length){
		for(i = arr->length; i<arr->length ; i--){	
			arr->a[i] = arr->a[i-1];
	}
		arr->a[index]=val;
		arr->length++;
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
	insert(&arr, 3, 14);
	display(arr);
}
