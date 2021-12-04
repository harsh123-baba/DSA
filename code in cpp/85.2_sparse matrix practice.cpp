#include<stdio.h>
#include<iostream>
using namespace std;
class elements{
	public:
		int i;
		int j;
		int x;
};
class Sparse{
	private:
		int m;
		int n;
		int num;
		elements *e;
	
	public:
		Sparse(int m, int n, int num){
			this->m = m;
			this->n=n;
			this->num = num;
			e = new elements[this->num];
		}
		~Sparse(){
			delete []e;
		}
		void read(){
			cout<<"Enter the non zero elements : \n";
			for(int i =0; i<num; i++){
				cin>>e[i].i>>e[i].j>>e[i].x;
			}
		}
		void display(){
			int k;
			for(int i = 0; i<m; i++){
				for(int j =0; j<n; j++){
					if(e[k].i == i && e[k].j == j){
						cout<<e[k++].x<<" ";
					}
					else{
						cout<<"0 ";
					}
				}
				cout<<"\n";
			}
		}
};


int main(){
	Sparse s1(5, 5, 5);
	s1.read();
	s1.display();
}
