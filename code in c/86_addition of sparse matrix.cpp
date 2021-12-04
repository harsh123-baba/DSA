#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct elements{
	int i;
	int j;
	int x;
};

struct Sparse{
	int m;
	int n;
	int num;
	struct elements *e;
};

void read(struct Sparse *s){
	int i;
	cout<<"Enter the dimession : ";
	cin>>s->m>> s->n;
	cout<<"Enter the no of non zero elements : ";
	cin >> s->num;
	s->e = new elements[s->num];
	cout<<"Enter the elements : \n";
	
	for(i =0; i<s->num; i++){
		cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
	}
cout<<"\n";
}

void display(struct Sparse s){
	int i , j, k;
	for(i =0; i<s.m; i++){
		for(j=0; j<s.n; j++){
			
			if(i == s.e[i].i && j == s.e[i].j){
				cout<<s.e[i].x<<" ";
			}
			else {
				cout<<"0 ";
			}
		}	
		cout<<"\n";
	}
}

struct Sparse * add(struct Sparse *s1 , struct Sparse *s2){
	struct Sparse *sum;
	int i , j ,k;
	i=j=k=0;
	sum = (struct Sparse *)malloc(sizeof(struct Sparse));
	sum->e = (struct elements *)malloc((s1->num+s2->num)*sizeof(struct elements));
	if(s1->m != s2->m && s1->n != s2->n){
		return 0;
	}
	else{
		while(i<s1->num && j<s2->num){
			if(s1->e[i].i <s2->e[j].i){
				sum->e[k++] = s1->e[i++];
			}
			else if(s1->e[i].i>s2->e[j].i){
				sum->e[k++] = s2->e[j++];
			}
			else{
				if(s1->e[i].j<s2->e[j].j){
					sum->e[k++] = s1->e[i++];
				}
				else if(s1->e[i].j>s2->e[i].j){
					sum->e[k++] = s2->e[j++];
				}
				else{
					sum->e[k] = s1->e[i];
					sum->e[k++].x = s1->e[i++].x+s2->e[j++].x;
				}
				
			}
		}
	}
	
	for(; i<s1->num; i++){
		sum->e[k++] = s1->e[i];
	}
	for(;j<s2->num; j++){
		sum->e[k++] = s2->e[j];
	}
	
	sum->m = s1->m ;
	sum->n = s1->n;
	sum->num = k;
	
} 




int main(){
	struct Sparse s1;
	struct Sparse s2;
	struct Sparse *s3;
	read(&s1);
	read(&s2);
	s3 = add(&s1, &s2);
	cout<<"\n";
	display(s1);
	cout<<"\n";
	display(s2);
	cout<<"\n";
	display(*s3);
}
