#include <iostream>

using namespace std;

int Readnumber()
{
	int Number;

	cout << "Please enter a number ? \n";
	cin >> Number;

	return Number;
}

void PrintRangeFrom1ToN_UsingFor(int Number)
{
	cout << "Range Printed Using For Statement: \n";

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingWhile(int Number)
{
	int Counter = 0;

	cout << "Range Printed Using While Statement: \n";

	while (Counter < Number)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhile(int Number)
{
	int Counter = 0;

	cout << "Range Printed Using Do While Statement: \n";

	do
	{
		Counter++;
		cout << Counter << endl;

	} while (Counter < Number);

}

int main()
{
	int N = Readnumber();

	PrintRangeFrom1ToN_UsingFor(N);
	PrintRangeFrom1ToN_UsingWhile(N);
	PrintRangeFrom1ToN_UsingDoWhile(N);


	return 0;
}