#include <iostream>
#include <cmath>

using namespace std;

float MyAbs(float Number)
{
	if (Number > 0)
		return Number;
	else
		return Number * -1;
}

float ReadNumber()
{
	float Number;
	cout << "\nPlease enter a number? \n";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber();
	cout << "\nMy Abs Result: " << MyAbs(Number) << endl;
	cout << "C++ Abs Result: " << abs(Number) << endl;

	return 0;
}