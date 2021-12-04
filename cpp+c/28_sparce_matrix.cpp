#include<iostream>
#include<stdio.h>
using namespace std;

struct Element 
{
    int i;
    int j;
    int x;
};

class Sparce
{
    private:
    int m;
    int n;
    int num;
    struct Element *e;

    public:
        Sparce(int m, int n)
        {
            this->m = m;
            this->n = n;
            cout<<"Enter the number of non zero elements : ";

            cin>>num;
            this->num = num;
            e = new Element[this->num];
            for(int i=0; i<this->num; i++)
            {
                cin>>e[i].i>>e[i].j>>e[i].x;
            }
        }

        void Display()
        {
            int i, j, k;
            for(i=0; i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(e[k].i==i && e[k].j==j)
                    {
                        cout<<e[k++].x<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                }
                cout<<"\n";
            }
        }
};

int main()
{
    Sparce s(4, 4);
    s.Display();
}