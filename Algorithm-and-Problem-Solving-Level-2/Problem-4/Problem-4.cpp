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

void PrintPerfectNumberFrom1ToN(int Number)
{
	cout << "\nPerfect Numbers From " << 1 << " To " << Number << " are: \n";
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number : "));

	return 0;
}