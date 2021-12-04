#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};


struct array* merge(struct array *arr1, struct array *arr2){
	int i=0, j= 0, k= 0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i<arr1->length && j<arr2->length){
		if(arr1->a[i]<arr2->a[j]){
			arr3->a[k++] = arr1->a[i++];
			
		}
		else{
			arr3->a[k++]= arr2->a[j++];
		}
	}
	for(;i<arr1->length;i++){
		arr3->a[k++]=arr1->a[i];
	}
	for(;j<arr2->length;j++){
		arr3->a[k++]= arr2->a[j];
	}
	arr3->length=arr1->length +arr2->length;
	arr3->size=10;
	
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
	struct array arr1 = {{1, 2, 3, 4, 5}, 10, 5};
	struct array arr2 = {{4, 3, 5, 6, 7}, 10, 5};
	struct array *arr3;
	arr3 = merge(&arr1, &arr2);
	display(*arr3);

}
