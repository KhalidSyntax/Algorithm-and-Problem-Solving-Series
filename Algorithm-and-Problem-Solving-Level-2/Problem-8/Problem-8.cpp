#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

int CountDigitFrequency(int Number, short DigitToCheck)
{
	int Reminder = 0, FreqCount = 0;

	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Reminder)
		{
			FreqCount++;
		}

	}
	return FreqCount;
}

int main()
{
	int Number = ReadPositiveNumber("Please enter the main number ?");
	short DigitToCheck = ReadPositiveNumber("Please enter one digit to check ?");

	cout << "\n Digit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(Number, DigitToCheck) << " Time(s). \n";

	return 0;
}