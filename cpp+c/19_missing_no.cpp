#include<iostream>
using namespace std;

int Missing(int *A, int n)
{
    int sum = n*(n+1)/2;
    int total;
    for(int i = 0; i<4; i++)
    {
        total +=A[i];
    }
    return (sum-total);
}

//alternate

int Missing_in_list(int A[], int n)
{
    int diff;
    diff = A[0]-0;
    int i=0;
    for(i=0; i<n-1; i++)
    {
        if(A[i]-i!=diff)
        {
            return i;
            break;
        }
    }
    return 0;

}

int main()
{
    int A[] = {4, 6, 7, 8};
    cout<<Missing_in_list(A, 5);

}