#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


float avg(struct array arr){
	int s =0;
	float avg;
	for(int i = 0; i<arr.length; i++){
			
			s += arr.a[i];
	}
	avg = s/(arr.length);
return avg;
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
	cout<<"avg of array : "<<avg(arr)<<"\n";
	display(arr);
}
