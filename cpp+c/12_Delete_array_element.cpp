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

int Array:: Delete(int pos)
{
    int x;
    x = A[pos];
    for(int i = pos; i<length; i++)
    {
        //copy A[i+1] to A[i] place;
        A[i] = A[i+1];
    }
    length--;
    return x;
}

int main()
{
    int size;
    cin >> size;
    Array a(size);
    a.Append(10);
    a.Append(51);
    cout<<"Deleted Element : "<<a.Delete(0)<< "\n";
    a.Display();
}