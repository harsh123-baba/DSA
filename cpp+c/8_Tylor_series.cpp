#include<iostream>
using namespace std;

double tylor(int n, int x)
{

    double r ;
    static double p = 1, f=1;
    if(n==0)
    {
        return 1;
    }
    else{
        r = tylor(n-1, x);
        p = p*x;
        f = f*n;
        return r+p/f;
    }

}



int main()
{
    cout<<tylor(5, 1);
}