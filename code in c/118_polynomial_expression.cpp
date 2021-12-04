#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

struct Node{
	int coeff;
	int exp;
	struct Node *next;
}*poly = NULL;

void create(){
	struct Node *t, *last;
	int num, i;
	cin>>num;
	for(int i = 0; i<num; i++){
		t = new Node;
		cin>>t->coeff>>t->exp;
		t->next = NULL;
		if(poly == NULL){
			poly = last = t;
		}
		else{
			last->next = t;
			last= t;
		}
	}
}
long eval(int x){
	double sum =0;
	struct Node *q=poly;
	while(q){
		sum+=q->coeff*pow(x, q->exp);
		q=q->next;
	}
	return sum;
}

int main(){
	create();
	cout<<eval(4);
}
