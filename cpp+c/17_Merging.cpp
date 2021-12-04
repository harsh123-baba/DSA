//do it again error thrown by compiler

#include<iostream>
using namespace std;

int [] Merge(int A[m], int B[n])
{
    int c[m+n+1];
    int i =0;
    int j=0 , k = 0;
    while(i<m && j<n)
    {
        if(A[i]>B[j])
        {
            c[k++] = B[j++];
        }
        else{
            c[k++] = A[i++];
        }
        
    for(; i<n; i++)
    {
        c[k++] = A[i];
    }

    for(; j<n; j++)
    {
        c[k++] = A[j];
    }
    }
    return c;
}

int main()
{
    int A[5] = {10, 20, 51, 56, 91};
    int B[7] = {41, 46, 53, 55, 57, 97, 101};
    Merge(A , B);

}