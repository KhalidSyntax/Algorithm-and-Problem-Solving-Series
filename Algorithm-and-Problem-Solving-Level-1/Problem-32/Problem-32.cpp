#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a number ? \n";
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Power;

	cout << "Please enter M power ? \n";
	cin >> Power;

	return Power;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
		return 1;

	int P = 1;
	for (int Counter = 1; Counter <= M; Counter++)
	{
		P *= Number;
	}
	return P;
}

int main()
{
	cout << "\nResult = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;
}