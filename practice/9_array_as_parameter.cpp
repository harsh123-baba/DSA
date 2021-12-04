#include <stdio.h>
#include <iostream>
using namespace std;

void func(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << "\n";
    }
}
int main()
{
    int A[5] = {2, 4, 45, 6, 8};
    func(A, 5); //Call by address
}
