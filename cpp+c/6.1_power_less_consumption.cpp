#include<iostream>
using namespace std;

int power(int m, int n)
{
    if(m==0)
    {
        return 1;
    }
    if(n ==0)
    {
        return 1;
    }
    else if(m%2==0)
    {
        return power(m*m , n/2);
    }
    else
    {
        return power(m*(m*m), (n-1)/2);
    }
}

int main()
{
    cout<<power(2, 10);

}