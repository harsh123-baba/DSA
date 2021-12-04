#include<iostream>
using namespace std;
class Upper
{
    private:
        int n;
        int *A;
    public:
        Upper()
        {
            n = 2;
            A = new int[2*3/2];
        }
        Upper(int n)
        {
            this->n = n;
            A = new int[n*(n+1)/2];
        }
        ~Upper()
        {
            delete []A;
        }
        void set(int  i, int j, int x);
        int get(int i , int j);
        void display();


};

void Upper::set(int i,int j, int x)
{
    if (i <= j)
    {
        A[((i - 1) * n - (i - 1) * (i - 1) / 2) + j - 1] = x;
    }
}

int Upper::get(int i , int j)
{
    if (i <= j)
    {
        return A[((i - 1) * n - (i - 1) * (i - 1) / 2) + j - 1];
    }
    return 0;
}
void Upper::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i <= j)
            {
                cout << A[((i - 1) * n - (i - 1) * (i - 1) / 2) + j - 1] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    Upper d(2);
    d.set(1, 1, 1);
    d.set(1, 2, 2);
    d.set(2, 2, 3);
    d.display();
}