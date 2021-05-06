#include <iostream>

bool areAllEven(int arr[], int n)
{
	bool result;

	if (n == 1)
	{
		return (arr[0] % 2 == 0);
		
	}
	else
	{
		result = areAllEven(arr, n - 1);
		if (result == true)
		{
			return (arr[n - 1] % 2 == 0);
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	int arr[4] = { 2, 22, 46, 14 };

	if (areAllEven(arr, 4) == true)
	{
		std::cout << "All even" << std::endl;
	}
	else
	{
		std::cout << "All not even" << std::endl;
	}

	return 0;
}