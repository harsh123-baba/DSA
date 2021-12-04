#include<iostream>
#include<stdio.h>
using namespace std;
class Diagonal{
	private:
		int n;
		int *A;
	public:
		Diagonal(){
			n = 2;
			A = new int[2];
			
		}
		Diagonal(int n){
			this->n = n;
			A = new int[n];
		}
		~Diagonal(){
			delete []A;
		}
		int get(int i, int j);
		void set(int i, int j , int x);
		void display();
	
};

void Diagonal :: set(int i , int j, int x){
	if(i ==j){
		A[i-1] = x;
	}
}
int Diagonal :: get(int i, int j){
	if(i == j){
		return A[i-1];
	}
	return 0;
}

void Diagonal::display(){
	for(int i = 1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==j){
				cout<<A[i]<<" ";
			}
			else{
				cout<<"0 ";
			} 
		}
		cout<<"\n";
	}
}
class Upper{
	private:
		int n;
		int *A;
	public:
		Upper(){
			int n = 2;
			A = new int[2*(2+1)/2];
		}
		Upper(int n){
			this->n = n;
			A = new int[n*(n+1)/2];
		}
		~Upper(){
			delete []A;
		}
		
		void set(int i , int j, int x);
		int get(int i , int j);
		void display();
};
void Upper::set(int i, int j, int x){
	if(i<=j){
		A[((i-1)*n-(i-1)*(i-1)/2)+j-1]=x;
	}	
}
int Upper :: get(int i , int j){
	if(i<=j){
		return A[((i-1)*n-(i-2)*(i-1)/2)+j-1];
	}
	else{
		return 0;
	}
}
void Upper :: display(){
	for(int i=1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			if(i<=j){
				cout<<A[((i-1)*n-(i-2)*(i-1)/2)+j-1]<<" ";
			}
			else {
				cout<<"0 ";
			}
			
		}
		cout<<"\n";
	}
}

class Lower{
	private:
		int n;
		int *A;
	public:
		Lower(){
			int n = 2;
			A = new int[2*(2+1)/2];
		}
		Lower(int n){
			this->n = n;
			A = new int[n*(n+1)/2];
		}
		~Lower(){
			delete []A;
		}
		void set(int i, int j, int x);
		int get(int i , int j);
		void display();
};
void Lower::set(int i, int j, int x){
	if(i>=j){
		A[i*(i-1)/2 +j-1] = x;
	}
}
int Lower :: get(int i , int j){
	if(i>=j){
		return A[i*(i-1)/2 + j-1];
	}
	else{
		return 0;
	}
}

void Lower :: display(){
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			if(i>=j){
				cout<<A[i*(i-1)/2+j-1]<<" ";
			}
			else{
				cout<<"0 ";
			}
			
		}
		cout<<"\n";
	}
}

int main(){
	int n;
	cout<<"Enter dimenssion : "<<"\n";
	cin>>n;
	cout<<"\nEnter Your choice \n";
	cout<<"1. Digonal Matrix"	;
	cout<<"2. Lower Matrix";
	cout<<"3. Upper matrix";
	int ch;
	cin>>ch;
	int i, j;
	int x;
	switch(ch){
		case 1:
			{
			Diagonal d(n);
			cout<<"Enter elements : ";
			for(i = 1,j= 1; i<=n; i++, j++){
				cin>>x;	
				d.set(i, j, x);
			}
			d.display();
		}
		case 2:
			{
			Upper u(n);
			cout<<"Enter elements : ";
			for(int i=1; i<=n; i++){
				for(int j = 1; j<=n; j++){
					cin>>x;
					u.set(i, j, x);		
				}
			}
			u.display();
			}
		case 3 :
			{
			Lower l(n);
			cout<<"Enter elements : ";
			for(int i = 1; i<=n; i++){
				for(int j=1; j<=n; j++){
					cin>>x;
					l.set(i, j, x);
				}
			}
		}
	}
}
