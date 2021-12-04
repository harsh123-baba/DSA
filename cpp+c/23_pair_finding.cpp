#include<iostream>
using namespace std;
int main()
{
    int k = 12;
    int A[] = {5, 4, 8, 7, 3, 10};
    int H[10] = {0};
    for(int i =0; i <6; i++)
    {
        if(H[k-A[i]]!=0)
        {
            cout<<A[i]<<" + "<<k-A[i]<<"\n";
        }
        H[A[i]]++;
    }


}