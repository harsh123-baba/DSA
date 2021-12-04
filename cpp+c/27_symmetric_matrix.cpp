#include<iostream>
using namespace std;

class Symmetric
{
private:
    int n;
    int *A;

public:
    Symmetric()
    {
        n = 2;
        A = new int[2 * 3 / 2];
    }
    Symmetric(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~Symmetric()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void Symmetric::set(int i, int j, int x)
{
    if (i <=j)
    {
        A[((i - 1) * n - (i - 1) * (i - 1) / 2) + j - 1] = x;
    }
}

int Symmetric::get(int i, int j)
{
    return 0;

}
void Symmetric::display()
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
                cout << A[((j - 1) * n - (j - 1) * (j - 1) / 2) + i - 1]<<" ";
            }
        }
        cout << "\n";
    }
}
int main()
{

    int n, x;

    //cin >> n;
    Symmetric d(2);
    d.set(1, 1, 1);
    d.set(1, 2, 2);
    d.set(2, 2, 3);

    d.display();
}