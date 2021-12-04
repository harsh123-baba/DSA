#include<iostream>
#include<stdio.h>
using namespace std;
//bacho wala method

//int main(){
//	int s;
//	int sum = 0;
//	int arr[10] = {1, 2, 3, 4, 6,7,8,9,10};
// 
//	for(int i = 0; i<9; i++){
//		sum += arr[i];
//	}
//	s = 5*11;
//	cout<<"Missing element is : "<< s-sum;
//}

int main(){
	int diff;
	int a[5] = {6, 7, 9, 10, 11};
	diff = a[0]-0;
	for(int i = 0; i<5; i++){
		if(a[i]-i != diff){
			cout<<i+diff;
			break;
		}
	}
	
	
}
