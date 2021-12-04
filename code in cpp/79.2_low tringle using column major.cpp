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
		void set(int i, int j, int x);
		int get(int i , int j);
		void display();
};
void Matrix::set(int i, int j, int x){
	if(i>=j){
		A[n*(j-1)-(j-2)*(j-1)/2+i-j] = x;
	}
}
int Matrix :: get(int i , int j){
	if(i>=j){
		return A[n*(j-1)-(j-2)*(j-1)/2+i-j];
	}
	else{
		return 0;
	}
}

void Matrix::display()
{ 
	for(int i=1;i<=n;i++)
 	{
	 for(int j=1;j<=n;j++)
	 {
		if(i>=j)
		cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
		else
		cout<<"0 ";
	}
	 cout<<"\n";
	}
}


int main(){
	int n;
	cin>>n;
	int x;
	Matrix lm(n);
	cout<<"Enter the elements : \n";
	for(int i =1 ; i<=n; i++){
		for(int j = 1; j<=n ; j++){
			cin >>x;
			lm.set(i, j, x);
		}
		
	}		
	lm.display();
}
