#include <iostream>
int linearsearch(int arr[], int value, int n) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == value) {
			return i;
		}
		else
			return NULL;
	}
}

