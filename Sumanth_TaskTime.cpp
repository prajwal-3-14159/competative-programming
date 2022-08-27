#include <iostream>
using namespace std;

struct _Box {
    int subName = 0;
    int time = -1;
};
typedef _Box Box;

void func() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int *c = new int[n];
    Box *containers = new Box[50001];

    for (int i=0; i<n; i++)
        cin >> c[i];
    
    for (int i=0; i<n; i++) {
        int time;
        cin >> time;
        if (temp[c[i]] == -1) {

        }
    }

}

int main() {
    for (int i=0; i<100000; i++) {
        temp[i] = -1;    
    }

    int t;
    cin >> t;

    while(t--) 
        func();
    
    return 0;
}