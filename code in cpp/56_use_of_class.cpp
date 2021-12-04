#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int breadth;
	public:
		Rectangle(){
			length =0;
			breadth = 0;
		}
		Rectangle(int l, int b){
			length =l;
			breadth = b;
		}
		int area(){
			return length*breadth;
		}
		void change(int l){
			length =l;
		}
		~Rectangle(){
			cout<<"Destructor";
		}
};
 
int main(){
	Rectangle r(10, 5);
	cout<<r.area()<<"\n";
	r.change(15);
	cout<<r.area()<<"\n";
}
