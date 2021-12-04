#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[11]= {6,7,8,10,11,12,15,16,17,18,19};
	int diff;
	diff = a[0]-0;
			
	for(int i = 0 ; i<7; i++){
		if(a[i]-i != diff){
			while(diff<a[i]-i){
			
				cout<<"Missing elements : " << i+diff<<"\n";
				diff++;
			 }
		}	
		}
	}


