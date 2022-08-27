#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>

using namespace std;

int output(string S, string F)
{
    char c1, c2;
    int n=0, n1=0, n2=27;
    int l1, l2;
    l1 = S.length();
    l2 = F.length();
    int *arr = new int[l2];
    int *arr2 = new int[l1];
    for (int i = 0; i<l1; i++)
    {
      n2 = 27;
      for (int j=0; j<l2; j++)
      {
        arr[j] = abs(S[i]-F[j]);
      }
      for (int j=0; j<l2; j++)
      {
        if(n2>arr[j])
        {
          n2 = arr[j];
        }
      }
      n += n2; 
    }
    
    return n;
}

int main()
{
    string S, F;
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
      cin>>S;
      cin>>F;
      cout<<output(S, F)<<endl;
    }

}