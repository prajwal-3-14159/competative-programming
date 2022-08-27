#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q, n1;
    cin>>n;
    set <int> s;
    for (int i=0; i<8; i++)
    {
        cin>>q>>n1;
        switch (q)
        {
        case 1:
            s.insert(n1);
            break;
        case 2:
            s.erase(n1);
            break;
        case 3:
            //set<int>::iterator itr = s.find(n1);
            cout<<(s.find(n1) == s.end()?"No":"Yes")<<endl;
            break;
        default:
            break;
        }
    } 
    return 0;
}



