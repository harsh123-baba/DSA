#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int A[5] = {1, 2, 3, 4};
    int *p;
    p = A;
    for(int i =0; i<5; i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    for(int i =0; i<5; i++){
        cout<<p[i]<<" ";
    }
}