#include<iostream>
using namespace std;

double e(int x , int n)
{
    int r = 1;
    double s=1;
    if(n==0)
    {
        return s;
    }
    s = 1+x*s/n;
    return e(x, n-1);

}


int main()
{
    cout<<e(1, 10);

}