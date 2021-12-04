#include<iostream>
#include<stdio.h>
using namespace std;

struct Element{
    int i;
    int j;
    int x;
};
class Matrix
{
    private:
    int num;
    int m;
    int n;
    struct Element *e;

    public:
        Matrix(int m, int n)
        {
            this->m = m;
            this->n = n;
            int num;
            cout<<"Enter the non-zero elements : ";
            cin>>num;
            this->num = num;
            for(int i =0; i<this->num; i++)
            {
                cin>>e[i].i>>e[i].j >>e[i].x;
            }
        }
        void display()
        {
            int k=0;
            for(int i=0;i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(e[k].i==i && e[k].j==j)
                    {
                        cout<<e[k++].x<<" ";
                    }0
                    else{
                        cout<<"0 ";
                    }
                    
                }
                cout<<"\n";
            }
        }
        void Add(Matrix m1, Matrix m2);
};

void Matrix::Add(Matrix m1, Matrix m2)
{
    Matrix m3(m, n);
    if(m1.m!=m2.m && m1.n != m2.n)
    {
        cout<<"sum is not possible : ";
        return;
    }
    while (i<)
    {
        /* code */
    }
    

}

int main()
{

}