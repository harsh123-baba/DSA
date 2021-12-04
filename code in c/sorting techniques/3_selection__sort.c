#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void insertion(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

void selection(int A[] , int n)
{
    int i, j, k;
    for(i = 0; i<n; i++)
    {
        for(j =k=i; j<n; j++)
        {
            if(A[j]<A[k])
            {
                k = j;
            }

        }
        swap(&A[i], &A[k]);
    }
}
int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    selection(A, 10);
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
}
