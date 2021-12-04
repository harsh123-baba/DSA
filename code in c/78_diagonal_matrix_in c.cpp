#include<iostream>
#include<stdio.h>
using namespace std;

struct diagonal{
	int n;
	int A[10];
};
void set(struct diagonal *m, int i, int j, int x){
	if(i==j){
		m->A[i-1] = x;	
	}
}
int get(struct diagonal m, int i, int j){
	if(i==j){
		return m.A[i-1];
	}
}
void display(struct diagonal m){
	for(int i = 0; i<m.n; i++){
		for(int j=0; j<m.n; j++){
			if(i==j){
				cout<<m.A[i];
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<"\n";
	}
}

int main()
{
	struct diagonal m;
	m.n = 4;
	set(&m, 1, 1, 1);
	set(&m, 2, 2, 2);
	set(&m, 3, 3, 3);
	set(&m, 4, 4, 4);
	cout<<get(m, 2,2)<<"\n";
	display(m);
}
