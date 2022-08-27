#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int mode_(vector<int> value)
{
    int i = 0;
    int h = 0;
    for (unsigned int a = 0; a < value.size(); a++)
    {
        int count = 1;
        int Position = value.at(a);
        for (unsigned int b = a + 1; b < value.size(); b++)
        {
            if (value.at(b) == Position)
            {
                count++;
            }
        }
        if (count >= i)
        {
            i = count;
            h = Position;
        }
    }
    return h;
}

int main() {
	int n, n1, n2, n3, n4;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		vector<int> arr;
		for (int j = 0; j < n1; j++)
		{
			cin >> n2;
			arr.push_back(n2);
		}
        n3 = mode_(arr);
        n4 = count(arr.begin(), arr.end(), n3);
        cout << n1 - n4 << endl;

	}
	return 0;
}
