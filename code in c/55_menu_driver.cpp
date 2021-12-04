#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct array{
	int *a;
	int size;
	int length;
};

struct array* intersection(struct array *arr1, struct array *arr2){
	int i=0, j= 0, k= 0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i<arr1->length && j<arr2->length){
		
		if(arr1->a[i]<arr2->a[j]){
			i++;
		}
		else if(arr2->a[j]<arr1->a[i]){
			j++;
		}
		else{
			arr3->a[k++] = arr1->a[i++];
			j++;
		}
		
	}
	
	arr3->length = k;
	arr3->size = 20;
	return arr3;
}


struct array* Union(struct array *arr1, struct array *arr2){
	int i=0, j= 0, k= 0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i<arr1->length && j<arr2->length){
		
		if(arr1->a[i]<arr2->a[j]){
			arr3->a[k++] = arr1->a[i++];
		}
		else if(arr2->a[j]<arr1->a[i]){
			arr3->a[k++] = arr2->a[j++];
		}
		else{
			arr3->a[k++] = arr1->a[i++];
			j++;
		}
		
	}
	for(; i<arr1->length;i++){
		arr3->a[k++] = arr1->a[i];
	}
	for(; j<arr2->length; j++){
		arr3->a[k++] = arr2->a[j];
	}
	arr3->length = k;
	arr3->size = 20;
	return arr3;
}

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

void insert(struct array *arr, int index, int val){
	int i;
	
	if(index>=0 && index<=arr->length){
		for(i = arr->length; i<arr->length ; i--){	
			arr->a[i] = arr->a[i-1];
	}
		arr->a[index]=val;
		arr->length++;
	}
	
}


void append(struct array *arr, int val){
	if(arr->length < arr->size){
		arr->a[arr->length++] = val;
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

void linearsearch(struct array arr, int val){
	int i;
	for(int i = 0; i<arr.length; i++){
		if(arr.a[i]==val){
			cout<<"Element is at : "<<i<<"\n";
		}
		
	}
}

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


int get(struct array arr, int index){
	if(index>=0 && index< arr.length){
		return arr.a[index];
	}
}


void set(struct array *arr,int index,int x){
	if(index>= 0 && index<arr->length){
		arr->a[index]  = x;
	}
}

int max(struct array arr){
	int max =arr.a[0]; 
	for(int i = 0; i<arr.length-1; i++){
		if(arr.a[i]<arr.a[i+1]){
			max = arr.a[i+1];
		}
		
	}
return max;
}



int min(struct array arr){
	int min =arr.a[0]; 
	for(int i = 0; i<arr.length-1; i++){
		if(arr.a[i]>arr.a[i+1]){
			min = arr.a[i+1];
		}
		
	}
return min;
}

int sum(struct array arr){
	int s = 0; 
	for(int i = 0; i<arr.length; i++){
		s +=arr.a[i];
	}
return s;
}


float avg(struct array arr){
	int s =0;
	float avg;
	for(int i = 0; i<arr.length; i++){
			
			s += arr.a[i];
	}
	avg = s/(arr.length);
return avg;
}


void reverse(struct array *arr){
	int *b;
	int i  , j;
	b = (int *) malloc(arr->length*sizeof(int));
	for(int i = arr->length-1, j=0; i>=0; i--, j++){
		b[j] = arr->a[i];
	}
	for(i= 0; i<arr->length; i++){
		arr->a[i]= b[i];
	}
}

void rearrange(struct array *arr){
	int i=0 ;
	int j = arr->length-1;
	while(i<j){
		while(arr->a[i]<0)i++;
		while(arr->a[j]>=0)j--;
		if (i<j){
			swap(arr->a[i], arr->a[j]);
		}
	}
}

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

	struct array arr;
	int ch;
	int x,index;	
	cout<<"Enter the size of array : ";
	cin>>arr.size;
	arr.a = (int *) malloc(arr.size*sizeof(int));
	arr.length=0;
	
	do{
		cout<<"\n Menu\n";
		cout<<"1. Insert \n";
		
		cout<<"2. Delete \n";
		cout<<"3. Search \n";
		cout<<"4. Sum \n";
		cout<<"5. display \n";
		cout<<"6. exit\n";
		
		cout<<"Enter your choice : ";
		cin>>ch;
		
		switch(ch){
			case 1 : 
			cout<<"Enter element and index : ";
			cin>>x>>index;
			insert(&arr, index, x);
			break;
			
			case 2:
				cout<<"Enter index";
				cin>>index;
				Delete(&arr, index);
				break;
				
			case 3:
				cout<<"Enter element to search ";
				cin>>x;
				binarysearch(arr, x);
				break;
			
			case 4:
				cout<<"sum is here";
				cout<<sum(arr);
				break;
				
			case 5:
				display(arr);
				
			
		}
		
		
	}while(ch<6);
	return 0;
}
