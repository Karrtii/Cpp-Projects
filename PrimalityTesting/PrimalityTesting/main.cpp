#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int num);

int main()
{
	int input;

	cout << "Please enter the number:" << endl;
	cin >> input;

	if (IsPrime(input) == true)
	{
		cout << input << " is a prime number" << endl;
	}
	else
	{
		cout << input << " is not a prime number" << endl;
	}

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