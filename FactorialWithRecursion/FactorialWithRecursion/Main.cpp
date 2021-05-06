#include <iostream>

int factorial(int n);


int main()
{
	std::cout << factorial(4) << std::endl;
	return 0;
}

int factorial(int n)
{
	int response;

	if (n == 1)
	{
		return 1;
	}
	else
	{
		response = factorial(n - 1);
		response *= n;
		return response;
	}
}