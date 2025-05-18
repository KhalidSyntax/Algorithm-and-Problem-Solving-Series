#include <iostream>

using namespace std;

int Readnumber()
{
	int Number;

	cout << "Please enter a number ? \n";
	cin >> Number;

	return Number;
}

void PrintRangeFromNTo1_UsingFor(int Number)
{
	cout << "Range Printed Using For Statement: \n";

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

void PrintRangeFromNTo1_UsingWhile(int Number)
{
	int Counter = Number + 1;

	cout << "Range Printed Using While Statement: \n";

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFromNTo1_UsingDoWhile(int Number)
{
	int Counter = Number + 1;

	cout << "Range Printed Using Do While Statement: \n";

	do
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);

}

int main()
{
	int N = Readnumber();

	PrintRangeFromNTo1_UsingFor(N);
	PrintRangeFromNTo1_UsingWhile(N);
	PrintRangeFromNTo1_UsingDoWhile(N);


	return 0;
}