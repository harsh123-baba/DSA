#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct Term{
	int c;
	int e;
};

struct Poly{
	int n;
	struct Term *t;
};

void read(struct Poly *p){
	int i, j, k;
	cin>>p->n;
	p->t=(struct Term *) malloc(p->n *sizeof(struct Term));
	for(i=0; i<p->n ; i++){
		cout<<i+1<<"th index\n";
		cin>>p->t[i].c>>p->t[i].e;
	}
}

void display(struct Poly p){
	int i, j, k;
	for(i=0; i<p.n;i++){
		cout<<p.t[i].c<<"x"<<p.t[i].e<<"+";
	}
	cout<<"\n";
}

void eval(struct Poly *p){
	int i, j, x;
	int sum =0;
	cout<<"Enter value x: ";
	cin>>x;
	for(i=0; i<p->n; i++){
		sum+= p->t[i].c*pow(x, p->t[i].e);	
	}
	cout<<sum;
}



struct Poly * add(struct Poly *p1, struct Poly *p2){
	int i, j, k;
	i=j=k=0;
	struct Poly * sum;
	sum = (struct Poly*) malloc(sizeof(struct Poly));
	sum->t = (struct Term *) malloc((p1->n+p2->n)*sizeof(struct Term));
	while(i<p1->n && j<p2->n){
		if(p1->t[i].e>p2->t[i].e){
			sum->t[k++] = p1->t[i++];
		}
		else if(p1->t[i].e<p2->t[i].e){
			sum->t[k++] = p2->t[j++];
		}
		else{
			sum->t[k].e = p1->t[i].e;
			sum->t[k].c = p1->t[i].c+p2->t[i].c;
		}
		
	}
	for(;i<p1->n; i++){
		sum->t[k++] =p1->t[i];
	}
	for(; j<p2->n; j++){
		sum->t[k++] = p2->t[j];
	}
	
	sum->n = k;
	return sum;
}







int main(){
	struct Poly p1, p2, *p3;
	read(&p1);
	read(&p2);
	p3 = add(&p1, &p2);
	cout<<"\n";
	display(p1);
	cout<<"\n";
	display(p2);
	cout<<"\n";
	display(*p3);

		
	
}



