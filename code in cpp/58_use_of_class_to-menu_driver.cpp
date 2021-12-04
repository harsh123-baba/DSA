#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Array{
	private:
		int *A;
		int size;
		int length;
		
	public:
		Array(){
			size = 10;
			A = new int[10];
			length = 0;
		}
		Array(int sz){
			size = sz;
			length = 0;
			A = new int[size];
		}
		~Array(){
			delete []A;
		}
	// we will write only 3 function
	// insert
	//delete
	//display
	void display();
	void insert(int index, int x);
	void Delete(int index);
	
};

void Array::display(){
	for(int i =0; i<length; i++){
		cout<<A[i]<<" ";
	}
		cout<<"\n";
}

void Array::insert(int index, int x){
	if(index>=0 && index <= length){
		for(int i = length-1; i>= length; i--){
			A[i+1] = A[i];
		}
		A[index] = x;
		length++;
		
	}
	
}
void Array::Delete(int index){
	int x =0;
	if(index>= 0 && index <= length){
		x = A[index];
		for(int i=index; i<length-1; i++){
			A[i] = A[i+1];
			
		}
		length--;
	}
	//return x;
} 


int main(){
	Array arr(10);
	arr.insert(0, 5);
	arr.insert(1, 6);
	arr.insert(2,9);
	arr.display();
	arr.Delete(0);
	arr.display();
}
