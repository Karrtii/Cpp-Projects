#include <iostream>


int sortedSearch(int sortedArr[], int size, int value)
{
	int low, high, mid, index;
	bool found = false;

	low = 0;
	high = size - 1;

	while ((found == false) && (low <= high))
	{
		mid = (low + high) / 2;
		if (sortedArr[mid] == value)
		{
			index = mid;
			found = true;
		}

		else if(value < sortedArr[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	if (found == true)
		return index;
	else
		return -1;
}

int main()
{
	int sortedArr[10] = { 1,3,5,7,9,11,13,15,17,19 };

	std::cout << sortedSearch(sortedArr, 10, 13) << std::endl;

	return 0;
}

