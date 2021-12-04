#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first, *second, *third;

void create1(int A[], int n){
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


void create2(int A[], int n){
	int i ;
	struct Node *t, *last;
	second = new Node;
	second->data = A[0];
	second->next = NULL;
	last = second;
	
	for(i=1 ; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last ->next = t;
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

void duplicates(struct Node *p){
	p = first;
	struct Node *q = p->next;
	
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

//reverse elements
void reverse1(struct Node *p){
	int *A, i;
	struct Node *q = p;
	A = new int[count(p)];
	while(q){
		A[i] = q->data;
		q = q->next;
		i++;
	}
	q=p;
	i--;
	while(q){
		q->data  = A[i];
		q = q->next;
		i--;
	}
}

void reverse2(struct Node *p){
	struct Node *q = NULL; 
	struct Node *r = NULL;
	while(p){
		r=q;
		q= p;
		p = p->next;
		q->next = r;
	}
	first= q;
}

void concate(struct Node *p, struct Node *q){
	third = p;
	while(p->next != NULL){
		p = p->next;
	}
	p->next = q;
}

void merge(struct Node *p, struct Node *q){
	
	struct Node *last;
	if(p->data <q->data){
		third = last= p;
		p = p->next;
		third->next = NULL;
	}
	else if(q->data<p->data){
		third= last = q;
		q= q->next;
		third->next = NULL;
	}
	
	while(p && q){
		if(p->data <q->data){
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
			
		}
		else if(p->data > q->data){
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}
	if(p){
		last->next = p;
	}
	if(q){
		last->next = q;
	}
	
}


int is_loop(struct Node *f){
	struct Node *q, *p;
	p = f;
	q = f;
	do{
		p = p->next;
		q = q->next;
		if(q){
			q = q->next;
		}
		else{
			q->next = NULL;
		}
	
	}while(p && q &&p!=q);
	
	if(p==q){
			return 1;   // return p==q? true: false;
		}
	else{
		return 0;
	}
}

int main(){
	struct Node *t1, *t2;
	int A[] = {2, 3, 4, 50, 60};
	create1(A, 5);
	cout<<is_loop(first);
	t1 = first->next->next;  // it will pointing on 3rd node
	t2 = first->next->next->next->next; // also you can use while loop to reach at the end of linked list
	t2->next = t1;
	printf("%d", is_loop(first));
	
	
	
	
	
	
	
	
	
	
}
	
