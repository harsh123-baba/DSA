#include<stdio.h>
#include<iostream>
using namespace std;
class Matrix{
	private:
		int n;
		int *A;
		
	public:
		Matrix(int n){
			this->n = n;
			A = new int[n+2*(n-1)];
		}
		~Matrix(){
			delete []A;
		}
		void set(int i, int j , int x);
		int get(int i, int j);
		void display();
};
void Matrix :: set(int i , int j, int x){
	if(i-j == 1){
		A[i-2]=x;
	}
	else if (i-j == 0){
		A[n-1 +j-1] = x;
	}
	else if(i-j == -1){
		A[(2*n-1)+i-1] = x;
	}
}
int Matrix :: get(int i, int j){
	if(i-j == 1){
		return A[i-2];
	}
	else if(i-j == 0){
		return A[n-1 + j-1];
	}
	else if(i-j == -1){
		return A[2*n-1 +i-1]; 
	}
	else {
		return 0;
	}
}

void Matrix ::display(){
	for(int i =0 ; i<n; i++){
		for(int j =0; j<n; j++){
			if(i-j == 1){
				cout<<A[i-2]<<" ";
			}
			else if(i-j == 0){
				cout<<A[n-1 + j-1]<< " ";
			}
			else if(i-j == -1){
				cout<<A[2*n-1+i-1]<<" ";
			}
			
			else {
				cout<< "0 ";
			}
			
		}
		cout<<"\n";
	}
}

int main(){

	int n;
	int x;
		
	cout<< "Enter no of elements ";
	cin>>n;
	Matrix t(n);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin>>x;
			t.set(i, j, x);
		}
		
	}
	t.display();
	cout<<t.get(0, 0);

}
