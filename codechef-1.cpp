#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

void is_correct(int N, int X, int Y)
{
    int k = (N + 1)*Y;
    if(k>=Y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

int main()
{
    int n, N, X, Y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>N>>X>>Y;
        is_correct(N, X, Y);
    }
    return 0;
}