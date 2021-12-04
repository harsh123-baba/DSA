#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
	int col;
	int val;
	struct Node *next;
}*first= NULL;

void create(){
	int m , n;
	struct Node *last;
	cin>>m>>n;
	struct Node *A[m];
	for(int i =0; i<n;i++){
		A[i] = new Node;
		cin>>A[i]->col>>A[i]->val;
		if(first == NULL){
			first = last = A[i];
		}
		else{
			last->next = A[i];
			last= A[i];
		}
	}	
}


void Display(struct Node *f, int m , int n){
	struct Node *p, **A;
	for(int i =0; i<m; i++){
		p = A[i];
		for(int j = 0; j<n; j++){
			if(j==p->col){
				cout<<p->val<<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<"\n";
	}
	
}

int main(){
	
	create();
	Display(first, 2 , 2);
	
	
	
}
