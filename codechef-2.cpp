#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void is_true(int N, int M, int K, int arr[])
{
    int count=0;
    for (int i=0; i<100; i++)
    {
        if(arr[i]!=1)
        {
            break;
        }
        count += 1;
    } 
    if (count == N)
    {
        cout<<100<<endl;
    }
    
    else if((count>=M) && (count!=N))
    {
        cout<<K<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int N, M, K;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>N>>M>>K;
        for(int j=0; j<N; j++)
        {
            cin>>arr[i];
        }
        is_true(N, M, K, arr);
    }

    return 0;
}

