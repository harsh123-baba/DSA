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
void Delete(struct array *arr,int index){
	
	int x = arr->a[index];
	for(int i = index; i<arr->length-1; i++){
		arr->a[i] = arr->a[i+1];
	}
	arr->length--;
	cout<<"Deleted element is : "<<x<<"\n";
}
int main(){
	struct array arr = {{1, 2, 3, 4, 5}, 10, 5};
	Delete(&arr, 2);
	display(arr);
}
