#include <iostream>
#include <cmath>

using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			IntPart++;
		else
			IntPart--;
	}
	else
	{
		return IntPart;
	}
}

float ReadNumber()
{
	float Number;
	cout << "Please enter a float number? \n";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "\nMy Round Result: " << MyRound(Number) << endl;
	cout << "C++ Round Result: " << round(Number) << endl;

	return 0;
}