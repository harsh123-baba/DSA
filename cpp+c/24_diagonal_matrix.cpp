#include<iostream>
#include<stdio.h>
using namespace std;
//diagonal matrix are square matrix also
class Matrix
{
    private:
        int n;
        int *A;
    public:
        Matrix()
        {
            n = 2;
            A = new int[2];        
        }
        Matrix(int n){
            this->n = n;
            A = new int[n];
        }
        ~Matrix()
        {
            delete []A;
        }
        void set(int i , int j, int x);
        int  get(int i , int j);
        void display();

    
};

void Matrix::set(int i ,int j, int x)
{
    if(i==j)
    {
        A[i-1] = x;
    }
    
}
int Matrix :: get(int i , int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    return 0;

}

void Matrix :: display()
{
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n ; j++)
        {
            if(i==j)
            {
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}


int main()
{
    Matrix d(4);
    d.set(1, 1, 5);
    d.set(2, 2, 6);
    d.set(3, 3, 1);
    d.set(4, 4, 3);
    d.get(1, 1);
    d.display();
}
