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

bool IsPerfectNumber(int Number)
{
	int Sum = 0;

	for (int Counter = 1; Counter < Number; Counter++)
	{
		if (Number % Counter == 0)
			Sum += Counter;
	}

	return Number == Sum;
}

void PrintResult(int Number)
{
	if (IsPerfectNumber(Number))
		cout << "\n " << Number << " Is Perfect Number \n";
	else
		cout << "\n " << Number << " Is Not Perfect Number \n";
}

int main()
{

	PrintResult(ReadPositiveNumber("Please enter a positive number ? "));

	return 0;
}