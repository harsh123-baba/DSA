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
    for(int i =0; i<length ; i++)
    {
        if(A[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    Array a(size);
    a.Insert(0, 10);
    a.Insert(1, 20);
    a.Insert(2, 30);
    a.Insert(3, 40);
    a.Insert(4, 50);
    a.Insert(5, 60);
    cout<<a.Linear(40)<<"\n";
    cout<<"\n\n";
    a.Display();
}