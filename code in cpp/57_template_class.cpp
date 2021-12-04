#include<iostream>
#include<stdio.h>
using namespace std;
template <class T>
class Arithmetic{
	private:
		T a;
		T b;
		
	public:
		Arithmetic(T, T);	
		T add();
		T sub();
};
template <class T>
Arithmetic <T>::Arithmetic(T a, T b){
	this->a =a;
	this->b = b;
}

template <class T>
T Arithmetic <T> :: add(){
	T c;
	c = a+b;
	return c;
}
template <class T>
T Arithmetic <T> :: sub(){
	T c;
	c = a-b;
	return c;
}




int main(){
	
	Arithmetic <float> arr1(.05, 5.0);
	cout<<arr1.add()<<"\n";
	cout<<arr1.sub()<<"\n";
//	
//	Arithmetic <int> arr1(5, 5);
//	cout<<arr1.add()<<"\n";
//	cout<<arr1.sub()<<"\n";
	

}
