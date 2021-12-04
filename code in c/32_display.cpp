#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array {
	int *a;
	int size;
	int length;
	
};

int main(){
	struct array arr;
	cin>>arr.size;
	arr.a = (int *)malloc(arr.size*sizeof(int));
	cin>>arr.length;
	for(int i =0; i<arr.length; i++){
		cin>>arr.a[i];
	}	
	
	for(int i= 0; i<arr.length;i++){
		cout<<arr.a[i]<<"\n";
	}
	
}
