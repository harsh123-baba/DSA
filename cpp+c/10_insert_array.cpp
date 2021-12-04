#include<iostream>
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
        length =0;
    }
    Array(int size)
    {
        this->size = size;
        A = new int[this->size];
        length = 0;
    }
    void Insert(int pos, int x);
    void Display();

};

void Array::Display()
{
    for(int  i=0; i<length; i++)
    {
        cout<<A[i]<<" ";
    }
}

void Array::Insert(int pos, int x)
{
    for(int i = length; i>pos; i--)
    {
        A[i] = A[i-1];
        
    }
    A[pos] = x;
    length++;
}

int main()
{
    int size;
    cin>>size;
    Array a(size);
    a.Insert(0, 10);
    a.Insert(1, 51);
    a.Display();
    
}