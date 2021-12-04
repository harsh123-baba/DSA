#include<iostream>
using namespace std;

void toh(int n, int A, int B, int C)
{
    if(n>0)
    {
        toh(n-1, A, C, B);
        cout<<"from "<<A << " to "<<C<<"\n";
        toh(n-1, B, C, A);
    }
}

int main()
{
    toh(6, 1, 2, 3);
}