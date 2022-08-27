#include <iostream>

using namespace std;

void staircase(int n)
{
    int i = 1;
    for (i = 1; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k=i; k>0; k--)
        {
            cout<< "#";
        }
        cout << endl;
    }
   
}

int main()
{
    int n=6;
    staircase(n);
    return 0;
}