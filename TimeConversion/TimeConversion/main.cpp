#include <iostream>
#include <string>
using namespace std;

int main()
{
	int hour24, minutes24;
	int hour12 = 0;
	char temp;
	string period;

	cout << "Enter a time in a 24-hour format: " << endl;
	cin >> hour24 >> temp >> minutes24;

	if (hour24 < 12 && hour24 > 0)
	{
		hour12 = hour24;
		period = " am";
	}
	else if (hour24 > 12 && hour24 < 24)
	{
		hour12 = hour24 % 12;
		period = " pm";
	}
	else if (hour24 == 0)
	{
		hour12 = 12;
		period = " am";
	}
	else if (hour24 == 12)
	{
		hour12 = 12;
		period = " pm";
	}

	cout << hour24 << temp << minutes24 << " in 12-hour format is " << hour12 << temp << minutes24 << period << endl;

	return 0;
}