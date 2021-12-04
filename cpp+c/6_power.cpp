#include<iostream>
using namespace std;

int power(int n, int k)
{
    if(n==0)
    {
        return 1;
    }
    if(k==0)
    {
        return 1;
    }
    else{
        return power(n, k-1)*n;
    }
}

int main()
{
    cout<< power(2, 10);

}