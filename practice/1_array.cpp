#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A[5];
    A[0] =1;
    A[1] = 2;
    A[2] = 1;
    A[3] = 2;
    A[4]=4;

    for(int i =0; i<5; i++){
        cout<<A[i]<<" ";
    }
}