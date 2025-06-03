#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;

}

void PrintPrimeNumbersFrom1ToNumbers(int Number)
{
	cout << "\nPrime Numbers From " << 1 << " To " << Number << " are : \n";
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "\nThe Number is prime \n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "\nThe Number is not prime \n";
		break;
	}
}

int main()
{

	PrintPrimeNumbersFrom1ToNumbers(ReadPositiveNumber("Please enter a positive number ? "));

	return 0;
}