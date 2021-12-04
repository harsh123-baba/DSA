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

void selection(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i, j;
    i = l;
    j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            swap(&A[i], &A[j]);
        }
    } while (i < j);
    swap(&A[l], &A[j]);
    return j;
}

void QucikSort(int A[], int l, int h)
{
    if (l < h)
    {
        int j;
        j = partition(A, l, h);
        QucikSort(A, l, j - 1);
        QucikSort(A, j + 1, h);
    }
}

//Merge two diffrent list A and B;
void Merge(int A[], int B[], int m, int n, int c[])
{
    
    int i, j, k;
    i=j=k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            c[k++] = A[i++];
        }
        else{
            c[k++] = B[j++];
        }

    }
    for(;i<m;i++)
    {
        c[k++] = A[i];
    }
    for(; j<n; j++)
    {
        c[k++] = A[j];
    }
    
}





int main()
{
    //int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, __INT32_MAX__};
    int A[] = {1, 5, 7, 9, 12};
    int B[] = {2, 4, 6, 8};
    int c[9];
    Merge(A, B,5, 4, c );
    int i;
    for (i = 0; i < 9; i++)
    {
        printf("%d\n",c[i]);
    }
}
