#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first;

void create(int A[], int n){
	int i;
	struct Node *t,*last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for(i=1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p = p->next;
	}
}

int count(struct Node *p){
	int c=0;
	while(p){
		c++;
		p = p->next;
	}
	return c;
}

int max(struct Node *p){
	int max = -32768;
	while(p){
		if(p->data >max){
			max = p->data;
			
		}
		p = p->next;

	}
	return max;
}


int min(struct Node *p){
	int m = 32768;
	while(p){
		if(p->data<m){
			m = p->data;
			
		}
		p=p->next;
	}
	return m;
}

int sum(struct Node *p){
	int sum =0;
	while(p){
		sum+=p->data;
		p = p->next;
	}
	return sum;
}

int search(struct Node *p, int key){
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

int improved_search(struct Node *p, int key){
	struct Node *q = NULL;
	while(p!= NULL){
		if(key==p->data){
			q->next = p->next;
			p->next = first;
			first=p;
			break;
		}
		else
		{
			q = p;
			p = p->next;
		}
	}
	return NULL;
}


void insert(int pos, int val){
	struct Node *t, *p;
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

void insert_sorted(struct Node *p, int key){
	struct Node *t, *q = NULL;
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


void Delete(struct Node *p, int pos){
	struct Node *q = NULL;
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

int is_sorted(struct Node *p){
	struct Node *q;
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


int main(){
	int A[] = {2, 3, 4, 5, 6,7};
	create(A, 7);
	display(first);
	cout<<"\n"<<sum(first)<<"\n";
	insert_sorted(first, 1);
	Delete(first , 2);
	display(first);
	cout<<"\n";
	int temp = is_sorted(first);
	if(temp){
		cout<<"Sorted";
	}
	else{
		cout<<"Not Sorted";
	}
	
}
