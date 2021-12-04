#include<iostream>
#include<stdio.h>
using namespace std;

class Matrix{
	private:
		int n;
		int *A;
		
	public :
		Matrix(int n){
			this->n = n;
			A = new int[n+(n-1)];
		}
		~Matrix(){
			delete A[];
		}
		
		void set(int i , int j, int x);
		int get(int i , int j);
		void display();
};
void Matrix :: set(int i , int j , int x){
	if(i ==1){
		A[i-1] = x;
	}
	else{
		A[(n-1)+(j-1)];
	}
}
int Matrix :: get(int i, int j){
	
}



int main(){
	int x; 
	int n;
	cout<<"Enter No of elements";
	cin>>n;
	for
}
