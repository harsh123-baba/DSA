#include<iostream>
using namespace std;

class Element
{
    public:
    int i;
    int j;
    int x;
};

class Matrix 
{
    private:
    int m;
    int n;
    int num;
    Element *e;
    public:
    Matrix(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
        cout << "Enter the non zero elements : ";
        for (int k = 0; k < num; k++)
        {
            cin >> e[k].i >> e[k].j >> e[k].x;
        }
    }

    void display()
    {
        int k;
        for(int i=0; i<m; i++)
        {
            for(int j =0; j<n; j++)
            {
                if(e[k].i== i && e[k].j==j)
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
    Matrix s1(5, 5, 2);
    //s1.read();
    s1.display();
}