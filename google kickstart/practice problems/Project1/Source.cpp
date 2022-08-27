#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char str[100] = "hello world";
	char str2[100];
	cout << str << endl;
	int n = 0;
	int i = 0;
	while (str[n] != '\0') {
		n += 1;
	}
	cout << n << endl;
	i = 0;
	for (int j = n / 2; j < n; j++)
	{
		str2[i] = str[j];
		i++;
	}
	int n2 = i;
	for (int i = n/2; i < n; i++)
	{
		str[i] = 'd';
	}
	for (int k = 0; k < n2; k++)
	{
		str[n] = str2[k];
		n++;
	}
	cout << str << endl;

	return 0;
}