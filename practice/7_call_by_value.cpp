#include<stdio.h>
#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp;
    temp = a;
    a= b;
    b= temp;
    cout<<"a : "<<a<<"\nb : "<<b<<"\n";
    return 0;
}
int main(){
    int a = 10;
    int b = 30;
    swap(a, b);

}