#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


bool is_sorted(struct array arr){
	int i;
	for(i= 0; i<arr.length-2; i++){
		if(arr.a[i]>arr.a[i+1]){
			return false;
		}
	}
	return true;
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
	//display(arr);
	cout<<"answer is in 0 and 1 : "<<is_sorted(arr)<<"\n"; 
	display(arr);
}
