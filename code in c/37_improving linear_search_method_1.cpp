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
void swap(int &x, int &y){
	int temp;
	temp = x;
	x= y;
	y = temp;	
}

void linearsearch(struct array *arr, int val){
	int i;
	for(int i = 0; i<arr->length; i++){
		if(arr->a[i]==val){
			swap(arr->a[i], arr->a[i-1]);            //we just swap index no with previous of index and now in next search we will find this no earlier
			cout<<"Element is at : "<<i-1<<"\n";			
		}
	}
	//display(arr);
}
int main(){
	struct array arr = {{1, 2, 3, 4, 5}, 10, 5};
	linearsearch(&arr, 5);
	display(arr);
}
