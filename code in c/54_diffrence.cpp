#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


struct array* diffrence(struct array *arr1, struct array *arr2){
	int i=0, j= 0, k= 0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i<arr1->length && j<arr2->length){
		
		if(arr1->a[i]<arr2->a[j]){
			arr3->a[k++] = arr1->a[i++];
		}
		else if(arr2->a[j]<arr1->a[i]){
			j++;
		}
		else{
			i++;
			j++;
		}
		
	}
	for(; i<arr1->length;i++){
		arr3->a[k++] = arr1->a[i];
	}


	arr3->length = k;
	arr3->size = 20;
	return arr3;
}



void display(struct array arr){
	int i;
	cout<<"Elements are : "<<"\n";
	for(i = 0; i<arr.length; i++){
		cout<<arr.a[i]<<"\n";
	}
}

int main(){
	
	struct array arr1={{2,9,21,28,35},10,5}; 
 	struct array arr2={{2,3,9,18,28},10,5}; 
 	//this can be done but both the array must be sorted
 	struct array *arr3; 
	arr3=diffrence(&arr1,&arr2); 
	display(*arr3);
}
