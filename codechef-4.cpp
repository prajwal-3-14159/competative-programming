#include <iostream>
#include <stdlib.h>

using namespace std;

void is_true(int N, int A, int B)
{
    int points = 0, n = N, p;
    while (n%2==0)
    {
        n = n/2;
        p+=1;
    }
    
    if(A<0 && B < 0)
    {
        cout<<A<<endl; 
    }

    if(A>0 && B<0)
    {
        if(A>B)
*        cout<<p*A 
        else

    }
    
    if(A<0 && B > 0)
    {
        
    }
    if(B)
    cout<<points<<endl; 
}

int main()
{
    int n;
    cin>>n;
    int N, A, B;
    for(int i=0; i<n; i++)
    {
        cin>>N>>A>>B;
        is_true(N, A, B);
    }
}
