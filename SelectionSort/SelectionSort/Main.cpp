#include <iostream>

int findIndexOfMin(int arr[], int low, int high)
{
	int min, minIndex;

	min = arr[low];
	minIndex = low;

	for (int i = low + 1; i <= high; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}

	return minIndex;
}

void selectionSort(int arr[], int arrSize)
{
	int i, minIndex;

	for (i = 0; i < arrSize; i++)
	{
		minIndex = findIndexOfMin(arr, i, arrSize - 1);
		std::swap(arr[i], arr[minIndex]);
	}
}