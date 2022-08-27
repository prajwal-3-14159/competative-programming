#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <numeric>

using namespace std;

void result(int arr1[], int arr2[], int n1, int n2)
{
	int n1 = 0;
	int n2 = 0;
	int max1=0, max2=0;
	for (int i = 0; i < n1-1; i++) {
		for (int j = i; j < n1-1; j++) {
			if (arr1[j] >= arr1[j + 1])
			{
				n1++;
			}
			else
			{
				if (n1 > max1) {
					max1 = n1;
				}
				break;
			}
		}
	}
	for (int i = 0; i < n2 - 1; i++) {
		for (int j = i; j < n2 - 1; j++) {
			if (arr2[j] >= arr2[j + 1])
			{
				n2++;
			}
			else
			{
				if (n2 > max1) {
					max2 = n2;
				}
				break;
			}
		}
	}
	cout << max1 + max2 << endl;
}

int main()
{
	int t, n1, n2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n1 >> n2;
		int* arr1 = new int[n1];
		int* arr2 = new int[n2];
	    result(arr1, arr2, n1, n2);
	}
	
	return 0;
}