#include <iostream>

void mergeSort(int arr[], int low, int high);
void merge(int arr[], int lowLeft, int highLeft, int highRight);
void printArray(int arr[], int size);

int main()
{
	int arr[8] = { 14,5,8,10,13,1,18,3 };
	int arrSize = 8;

	mergeSort(arr, 0, arrSize - 1);
	printArray(arr, arrSize);
	return 0;
}



void merge(int arr[], int lowLeft, int highLeft, int highRight)
{
	int lowRight, size, rightIndex, leftIndex, resultIndex, arrIndex;
	int* mergeArr;

	lowRight = highLeft + 1;

	size = highRight - lowLeft + 1;

	mergeArr = new int[size];

	leftIndex = lowLeft;
	rightIndex = lowRight;
	resultIndex = 0;

	while (leftIndex <= highLeft && rightIndex <= highRight)
	{
		if (arr[leftIndex] < arr[rightIndex])
		{
			mergeArr[resultIndex] = arr[leftIndex];
			leftIndex++;
			resultIndex++;
		}
		else
		{
			mergeArr[resultIndex] = arr[rightIndex];
			rightIndex++;
			resultIndex++;
		}
	}

	while (leftIndex <= highLeft)
	{
		mergeArr[resultIndex] = arr[leftIndex];
		leftIndex++;
		resultIndex++;
	}

	while (rightIndex <= highRight)
	{
		mergeArr[resultIndex] = arr[rightIndex];
		rightIndex++;
		resultIndex++;
	}

	for (int i = 0, arrIndex = lowLeft; i < size; i++, arrIndex++)
	{
		arr[arrIndex] = mergeArr[i];
	}
	
	delete[] mergeArr;
}

void mergeSort(int arr[], int low, int high)
{
	int mid;

	if (low == high)
	{
		return;
	}
	else
	{
		mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}