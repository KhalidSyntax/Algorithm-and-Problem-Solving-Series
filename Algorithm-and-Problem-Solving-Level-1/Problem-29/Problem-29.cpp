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

int SumEvenFromNTo1_UsingFor(int Number)
{
	cout << "Sum Even Numbers Using For Statement: ";

	int Sum = 0;
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (CheckOddEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}
	return Sum;
}

int SumEvenFromNTo1_UsingWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Even Numbers Using While Statement: ";

	while (Counter <= Number)
	{
		if (CheckOddEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
		Counter++;
	}
	return Sum;
}

int SumEvenFromNTo1_UsingDoWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;

	cout << "Sum Even Numbers Using Do While Statement: ";

	do
	{
		if (CheckOddEven(Counter) == enOddOrEven::Even)
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

	cout << SumEvenFromNTo1_UsingFor(N) << endl;
	cout << SumEvenFromNTo1_UsingWhile(N) << endl;
	cout << SumEvenFromNTo1_UsingDoWhile(N) << endl;


	return 0;
}