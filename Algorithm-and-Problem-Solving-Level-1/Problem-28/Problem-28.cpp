#include <iostream>

using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int Readnumber()
{
	int Number;

	cout << "Please enter a number ? \n";
	cin >> Number;

	return Number;
}

enOddOrEven CheckOddEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOddFromNTo1_UsingFor(int Number)
{
	cout << "Sum Odd Numbers Using For Statement: ";

	int Sum = 0;
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (CheckOddEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}
	return Sum;
}

int SumOddFromNTo1_UsingWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers Using While Statement: ";

	while (Counter <= Number)
	{
		if (CheckOddEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
		Counter++;
	}
	return Sum;
}

int SumOddFromNTo1_UsingDoWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;

	cout << "Sum Odd Numbers Using Do While Statement: ";

	do
	{
		if (CheckOddEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
		Counter++;

	} while (Counter <= Number);
	return Sum;

}

int main()
{
	int N = Readnumber();

	cout << SumOddFromNTo1_UsingFor(N) << endl;
	cout << SumOddFromNTo1_UsingWhile(N) << endl;
	cout << SumOddFromNTo1_UsingDoWhile(N) << endl;


	return 0;
}