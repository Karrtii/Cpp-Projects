#include <iostream>
using namespace std;

int factorial(int num);
int kCombinations(int n, int k);

int main()
{
	int n, k, kComb;

	cout << "Enter n and k (n>=k): " << endl;
	cin >> n >> k;

	/*
	nFact = 1;
	for (int i = 1; i <= n; i++)
	{
		nFact *= i;
	}
	
	kFact = 1;
	for (int i = 1; i <= k; i++)
	{
		kFact *= i;
	}

	n_kFact = 1;
	for (int i = 1; i <= n - k; i++)
	{
		n_kFact *= i;
	}
	*/

	kComb = kCombinations(n, k);

	cout << n << " choose " << k << " is " << kComb << endl;

	return 0;
}

int kCombinations(int n, int k)
{
	int  nFact, kFact, n_kFact;
	nFact = factorial(n);
	kFact = factorial(k);
	n_kFact = factorial(n - k);

	return (nFact / (kFact * n_kFact));
}


int factorial(int num)
{

	int response = 1;

	for (int i = 1; i <= num; i++)
	{
		response *= i;
	}
	return response;
}