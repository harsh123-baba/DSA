#include<stdio.h>
#include<iostream>
using namespace std;

class Matrix{
	private:
		int n;
		int *A;
	public:
		Matrix(){
			int n = 2;
			A = new int[2*(2+1)/2];
		}
		Matrix(int n){
			this->n = n;
			A = new int[n*(n+1)/2];
		}
		~Matrix(){
			delete []A;
		}
		
		void set(int i , int j, int x);
		int get(int i , int j);
		void display();
};
void Matrix::set(int i, int j, int x){
	if(i<=j){
		A[j*(j-1)/2+(i-1)]=x;
	}	
}
int Matrix :: get(int i , int j){
	if(i<=j){
		return A[j*(j-1)/2+(i-1)];
	}
	else{
		return 0;
	}
}
void Matrix :: display(){
	for(int i=1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			if(i<=j){
				cout<<A[j*(j-1)/2+(i-1)]<<" ";
			}
			else {
				cout<<"0 ";
			}
			
		}
		cout<<"\n";
	}
}

int main(){
	int n , x;
	cout<<"Enter Dimension ";
	cin>>n;
	Matrix um(n);
	cout<<"\n";
	for(int i = 1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>x;
			um.set(i, j, x);
		}
	}
	um.display();
	
}
