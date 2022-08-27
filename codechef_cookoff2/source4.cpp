#include <iostream>
#include <stdlib.h>
#include <set>
#include <iterator>
#include <math.h>

using namespace std;

long int XOR(long int x, long int y)
{
	return (x | y) & (~x | ~y);
}

long int possible_XOR(int n)
{
	long long int number;
	set <long int> s;
	for (int i = 0; i <=n; i++)
	{
		for (int j = 0; j <=n; j++)
		{
			s.insert(XOR(i, j));
			
		}
	}
	long int c = (int)pow(10, 9);
	c += 7;
	
	return s.size() % c;
}

int main()
{
	unsigned long int n, n1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		cout << possible_XOR(n1) << endl;
	}
	return 0;
}