#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int Factorial(int Number)
{
	int Factorial = 1;

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		Factorial *= Counter;
	}
	return Factorial;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Please enter a positive number?")) << endl;

	return 0;
}