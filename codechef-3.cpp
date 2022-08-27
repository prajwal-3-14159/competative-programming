#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void is_true(string str, int n)
{
    int count=0;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<n+i; j++)
        {
            int l = int(str[j]-'0');
            int m = int(str[j+i]-'0');
            if((l-m)==(i+1))
            {
                count+=1;
            }
        }
    }   
    cout<<count<<endl; 
}

int main()
{
    int n, N;
    cin>>n;
    string str;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>str;    
        is_true(str, N);
    }

    return 0;
}

