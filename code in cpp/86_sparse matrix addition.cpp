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
		Sparse(int m, int n, int x){
			this->m =m;
			this->n = n;
			this->num = num;
			e = new elements[this->num];
		}
		
		
		~Sparse(){
			delete []e;
		}
		void read(){
			cout<<"Enter the non zero elements : \n";
			for(int i =0; i<num ; i++){
				cin>>e[i].i>>e[i].j>>e[i].x;
			}
		}
		void display(){
			int i, j,k;
			i=j=k=0;
			for(i=0; i<m; i++){
				for(j=0; j<n; j++){
					if(i == e[i].i && j== e[i].j){
						cout<<e[i].x<<" ";
					}
					else {
						cout<<"0 ";
					}
				}
				cout<<"\n";
		}
			
		}
		
		Sparse s1  add(Sparse s2){
			int i, j, k ;
			i=j=k=0;
			Sparse sum;
			if(m != s2.m && n = s2.n){
				return 0;
			}
			else{
				while(i<num && j<s2.num){
					if(e[i].i>s2.e[j].i){
						sum.e[k++] = s2.e[j++];
					}
					else if(e[i].i<s2.e[j].i){
						sum.e[k++] =e[i++];
					}
					else{
						if(e[i].j>s2.e[j].j){
							sum.e[k++] = s2.e[j++];
						}
						else if(e[i].j<s2.e[j].j){
							sum.e[k++] =e[i++];
						}
						else{
							sum.e[k] = s2.e[i];
							sum.e[k].x = e[i++].x+s2.e[j++].x
						}			
					}
				}				
				for(; i<num; i++){
					sum.e[k++] = e[i];
				}
				for(; j<s2.num; j++){
					sum.e[k++]= s2.e[i];
				}
				sum.m = m;
				sum.n = n;
				sum.num = k;		
			}
		}
};

int main(){
	Sparse s1(5 , 5, 5);
	Sparse s2(5 ,5 , 6);
	s1.read();
	s2.read();
	s1.display();
	s2.display();
	cout<<"\n";
	
	s = s1.add(s2);
	s.display()

}


















