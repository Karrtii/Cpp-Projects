#include <iostream>
#include <vector>
using namespace std;

double* getDoubles(int numDoubles)
{
	double start = 1.0;
	double result = 0.0;
	double* arr = new double[numDoubles];

	for (int i = 0; i < numDoubles; i++)
	{
		result = start / 3.0;
		arr[i] = result;
		start++;
	}

	return arr;

	delete[] arr;
	arr = nullptr;
}

int main()
{
	int numDoubles =  5;
	double *result;
	int counter = 0;

	result = getDoubles(numDoubles);

	for (int i = 0; i < numDoubles; i++)
	{
		cout << *(result + counter) << " " << endl;
		counter++;
	}

}