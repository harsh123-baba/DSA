#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
class Linked{
	private:
		Node *first;
	public:
		Linked(){
			first = NULL;
		}
		
		Linked(int A[], int n){
			Node *last, *t;
			int i=0;
			first = new Node;
			first->data = A[0];
			first->next = NULL;
			last= first;
			for(i=1 ; i<n; i++){
				t = new Node;
				t->data = A[i];
				t->next = NULL;
				last->next = t;
				last = t;
			}
		}
		
		~Linked(){
			Node *p = first;
			while(first){
				first = first->next;
				delete p;
				p = first;
			}
		}
		void display();
		void insert(int pos, int x);
		int count();
		int max();
		int min();
		int sum();
		int search(int key);
		int is_sorted();
		void insert_sorted(int x);
		void Delete(int pos);
		void duplicates();
		
};
int Linked:: count(){
	int c=0;
	Node *p = first;
	while(p){
		c++;
		p = p->next;
	}
	return c;
}

int Linked ::max(){
	int max = -32768;
	Node *p;
	while(p){
		if(p->data >max){
			max = p->data;
			
		}
		p = p->next;

	}
	return max;
}


int Linked::min(){
	int m = 32768;
	Node *p = first;
	while(p){
		if(p->data<m){
			m = p->data;
			
		}
		p=p->next;
	}
	return m;
}

int Linked :: sum(){
	int sum =0;
	Node *p = first;
	while(p){
		sum+=p->data;
		p = p->next;
	}
	return sum;
}

int Linked :: search(int key){
	Node *p = first;
	while(p){
		if(key==p->data){
			return 1;
		}
		else{
			p = p->next;
		}
		
	}
	return NULL;
}

void Linked:: insert(int pos, int val){
	Node *t, *p =first;
	if(pos==0){
		t = new Node;
		t->data = val;	
		t->next = first;
		first = t;	
	}
	else{
		int i;
		p = first;
		for(i =0; i<pos-1; i++){
			p = p->next;
		}
		if(p)
		{
			t = new Node;
			t->data = val;
			t->next = p->next;
			p->next = t;
		}
	}
}

void Linked ::insert_sorted(int key){
	Node *p = first;
	Node *t, *q = NULL;
	t = new Node;
	t->data = key;
	t->next = NULL;	
	if(first == NULL){
		first = t;
	}
	else{
		while(p && p->data<key){
			q =p;
			p = p->next;
		}
		if(p == first){
			t->next = first;
			first =t;
		}
		else{
			t->next  = p;
			q->next = t;
		}
		
		
		
		}
		
}

void Linked :: Delete(int pos){
	Node *p = first;
	Node *q = NULL;
	p = first;
	if(pos ==0){
		first=first->next;
		int x = p->data;
		delete p;
	}
	else{
		for(int i=0; i<pos-1; i++){
			q = p;
			p = p->next;
		}
		q->next = p->next;
		int x = p->data;	
		delete p;
		
	}
	
}

int Linked :: is_sorted(){
	Node *p = first;
	Node *q;
	p =first;
	while(p){
		q =p;
		p = p->next;
		if(p->data > q->data){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	
}

void Linked::duplicates(){
	Node *p = first;
	Node *q = p->next;
	
	while(q){
		if(p->data != q->data){
			p=q;
			q = q->next;
		}
		else{
			p->next = q->next;
			delete q;
			q= p->next;
		}
	}	
}

void Linked::display(){
	Node *p = first;
	while(p){
		cout<<p->data <<" ";
		p = p->next;
	}
	cout<<"\n";
}
int main(){
	
	int A[] = {2, 3, 4, 50, 60};
	Linked l(A, 5);

	l.display();
	cout<<"\n";

	
}


