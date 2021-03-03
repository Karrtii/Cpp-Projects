#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	return 0;
}

bool IsPrime(int num)
{
	int countDivs = 0;

	for (int i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			countDivs++;
		}
	}

	if (countDivs == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}