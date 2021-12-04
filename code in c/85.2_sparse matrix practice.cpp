#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct element{
	int i;
	int j; 
	int x;
};
struct sparse{
	int m;
	int n;
	int num;
	struct element *e;
};
void create(struct sparse *s){
	printf("Enter Dimenssion \n");
	scanf("%d %d", &s->m, &s->n);
	printf("Enter no of non zero elements : ");
	scanf("%d", &s->num);
	s->e = new element[s->num];
	for(int i=0; i<s->num; i++){
		scanf("%d %d %d",&s->e[i].i, &s->e[i].j, &s->e[i].x);
		
	}

}

void display(struct sparse s){
	int i, j, k;
	for(int i = 0; i<s.num; i++){
		for(int j=0; j<s.num; j++){
			if(i==s.e[k].i && j == s.e[k].j){
				cout<<s.e[k++].x<<" ";
			}
			else{
				cout<<"0 ";
			}
			
		}
		cout<<"\n";
	}
}

int main(){
	struct sparse s;
	create(&s);
	display(s);
}
