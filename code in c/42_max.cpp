#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


int max(struct array arr){
	int max =arr.a[0]; 
	for(int i = 0; i<arr.length-1; i++){
		if(arr.a[i]<arr.a[i+1]){
			max = arr.a[i+1];
		}
		
	}
return max;
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
	cout<<"Max of array : "<<max(arr)<<"\n";
	display(arr);
}
