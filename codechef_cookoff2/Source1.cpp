#include <iostream>
#include <stdlib.h>

using namespace std;

int no_of_operations(int arr[], int n)
{
	int max, number, truth=0;
	max = arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != max)
		{
			if (arr[i] > max)
			{
				truth = 2;
				return truth;
			}
			else {
				truth = 1;

			}
		}
	}
	return truth;
}

int main() 
{
	int n, n1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		int* arr = new int[n1];
		for (int j = 0; j < n1; j++)
		{
			cin >> arr[j];
		}
		cout << no_of_operations(arr, n1) << endl;
	}
	return 0;
}