#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

 int countZeroes(int arr[], int n)
{
    int a = 0, b = n - 1;
    int x = (a + b) / 2;
    if (arr[0] == 0)
    {
        return n;
    }
    else if (arr[n - 1] == 1)
    {
        return 0;
    }
    else if (arr[n - 1] == 0 && arr[n - 2] == 1)
    {
        return 1;
    }
    while ((arr[x] == 0)  || (arr[x - 1] == 1))
    {
        if ((arr[x+1] == 0) && (arr[x] == 1))
        {
            //cout << "c1r " << x <<endl;
            return n - (x +1);
        }
        if ((arr[x] == 0) && (arr[x-1] == 1))
        {
            //cout << "c2r " << x << endl;
            return n - x;
        }
        //cout << "x " << x;
        if (arr[x] == 1)
        {
            x = (x + b) / 2;
            a = x;
        }
        else
        {
             x = (x + a) / 2;
             b = x;
         }
    }
    //cout << "fcr " << x;
    return n-x;
}


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = countZeroes(arr, n);
        cout<<endl<<ans;
    }
    return 0;
}