#include <iostream>
using namespace std;

class Array
{
private:
    int size;
    int *A;
    int length;

public:
    Array()
    {
        A = new int[10];
        length = 0;
    }
    Array(int size)
    {
        this->size = size;
        A = new int[this->size];
        length = 0;
    }
    void Insert(int pos, int x);
    void Display();
    void Append(int x);
    int Delete(int pos);
    int Linear(int x);
    int Binary(int x);
    bool IsSorted();
    int Dupliacte_sorted();
    void Multiple_duplicates();
    void Unsorted_Duplicates();
    int max();
};

void Array::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
}

void Array::Insert(int pos, int x)
{
    for (int i = length; i > pos; i--)
    {
        A[i] = A[i - 1];
    }
    A[pos] = x;
    length++;
}

void Array::Append(int x)
{
    A[length++] = x;
}

int Array::Delete(int pos)
{
    int x;
    x = A[pos];
    for (int i = pos; i < length; i++)
    {
        //copy A[i+1] to A[i] place;
        A[i] = A[i + 1];
    }
    length--;
    return x;
}

//if any element is seached again and again then we put this no at front
//then there are at 1st pos element found

int Array::Linear(int x)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    return -1;
}

//list must be sorted for this

int Array::Binary(int x)
{

    int l = 0;
    int h = length;
    int mid;
    mid = (l + h) / 2;
    if (x == A[mid])
    {
        return mid;
    }
    else if (x < A[mid])
    {
        h = mid - 1;
    }
    else
    {
        l = mid + 1;
    }
    return -1;
}

bool Array::IsSorted()
{
    for (int i = 0; i < length - 2; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}

int Array ::Dupliacte_sorted()
{
    int last = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] == A[i + 1] && A[i] != last)
        {
            last = A[i];
            cout << A[i];
            break;

            return A[i];
        }
    }
    return 0;
}

void Array ::Multiple_duplicates()
{
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (A[j] == A[i])
            {
                j++;
                cout << A[i] << " Appers " << j - i << " times.";
            }
        }
    }
}

int Array::max()
{
    int max = 0;
    for(int i=0; i<length; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    return max;
}




void Array :: Unsorted_Duplicates()
{
    int i , j;
    int m = max();
    int H[m];
    for(i=0; i<m; i++)
    {
        H[i]=0;
    }
    for(i=0; i<length; i++)
    {
        H[A[i]]++;
    }
    for(i=0; i<m; i++)
    {
        if(H[i]>1)
        {
            cout<<i<<" appers "<<H[i]<<" Times\n";
        }
    }
}


int main()
{
    int size;
    cin >> size;
    Array a(size);
    a.Insert(0, 15);
    a.Insert(1, 2);
    a.Insert(2, 3);
    a.Insert(3, 3);
    a.Insert(4, 1);
    a.Insert(5, 1);
    //cout << a.max() << "\n";
    a.Unsorted_Duplicates();
    cout << "\n\n";
    a.Display();
}