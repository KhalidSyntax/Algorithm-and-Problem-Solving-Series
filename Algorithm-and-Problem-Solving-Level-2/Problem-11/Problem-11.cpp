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

int ReverseNumber(int Number)
{
	int Reminder = 0;
	int Number2 = 0;

	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{
	if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number : ")))

		cout << "Yes , it is a palindrome number. \n";
	else
		cout << "No , it is not a palindrome number. \n";

	return 0;
}