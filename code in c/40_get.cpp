#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


int get(struct array arr, int index){
	if(index>=0 && index< arr.length){
		return arr.a[index];
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
	cout<<"the element we want is present at index "<< get(arr, 2)<<"\n";
	display(arr);
}
