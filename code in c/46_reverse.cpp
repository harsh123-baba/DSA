#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


void reverse(struct array *arr){
	int *b;
	int i  , j;
	b = (int *) malloc(arr->length*sizeof(int));
	for(int i = arr->length-1, j=0; i>=0; i--, j++){
		b[j] = arr->a[i];
	}
	for(i= 0; i<arr->length; i++){
		arr->a[i]= b[i];
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
	display(arr);
	reverse(&arr);
	display(arr);
}
