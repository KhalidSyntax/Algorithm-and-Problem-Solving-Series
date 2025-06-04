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

void PrintNumberPattern(int Number)
{
	cout << "\n";

	for (int i = 1; i <= Number; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Please enter a positive number :"));

	return 0;
}