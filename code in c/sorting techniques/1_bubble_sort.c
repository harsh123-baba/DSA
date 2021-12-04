#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}


void Bubble(int A[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
    {
        for(j=0;j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j], &A[j+1]);

            }
        }
    }
}


int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    Bubble(A, 10);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ", A[i]);
    }


}
