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
void Merge_2_list(int A[], int B[], int m, int n, int c[])
{

    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            c[k++] = A[i++];
        }
        else
        {
            c[k++] = B[j++];
        }
    }
    for (; i < m; i++)
    {
        c[k++] = A[i];
    }
    for (; j < n; j++)
    {
        c[k++] = A[j];
    }
}

void Merge(int A[], int l, int mid, int h)
{
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }
    for (; i <= mid; i++)
    {
        B[k++] = A[i];
    }
    for (; j <= h; j++)
    {
        B[k++] = A[j];
    }
    for (i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

int IMergeSort(int A[], int n)
{
    int p, i, l, mid, h;
    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n)
    {
        Merge(A, 0, p / 2 - 1, n - 1);
    }
}

void RMergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {

        mid = (l + h) / 2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid + 1, h);

        Merge(A, l, mid, h);
    }
}

int FindMax(int A[], int n)
{
    int max;
    max = 0;
    for(int i =0; i<n; i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void CountSort(int A[], int n)
{
    int *c;
    int i, j;
    int max = FindMax(A, n);
    c = (int *)malloc((max+1)*sizeof(int));
    for(i=0; i<max+1; i++)
    {
        c[i] = 0;
    }
    for(i=0; i<n; i++)
    {
        c[A[i]]++;
    }
    i=0;
    j=0;
    while(i<max+1)
    {
        if(c[i]>0)
        {
            A[j++] = i;
            c[i]--;
        }
        else
        {
            i++;
        }
    }

}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    CountSort(A,10);
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
}
