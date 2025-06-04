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

void PrintAllDigitFrequency(int Number)
{
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(Number, i);

		if (DigitFrequency > 0)
		{
			cout << "\n Digit " << i << " Frequency is " << DigitFrequency << " Time(s). \n";
		}
	}
}

int main()
{
	PrintAllDigitFrequency(ReadPositiveNumber("Please enter a positive number : "));

	return 0;
}