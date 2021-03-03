#include <iostream>
using namespace std;

int main()
{
	int input;
	int first = 0;
	int second = 1;
	int next;

	cout << "Enter a positive integer greater than 1: " << endl;
	cin >> input;

	cout << "The Fibonacci series is: " << endl;
	cout << "1" << endl;

	for (int i = 0; i < input - 1; i++)
	{
		next = first + second;
		first = second;
		second = next;

		cout << next << endl;
	}

	return 0;
}