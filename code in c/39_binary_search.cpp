#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


int binarysearch(struct array arr, int val){
	    int mid, l, h;
		h =arr.length-1;
		l = 0;
		
	while(l<=h){
		mid = (l+h)/2;
		if(val == arr.a[mid]){
			return mid;
		}
		else if(val<arr.a[mid]){
			h = mid-1;
		}
		else{
			l = mid +1;
		}
	}
		return -1;
	
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
	cout<<"Element at index : "<<binarysearch(arr, 1)<<"\n";
	display(arr);
}
