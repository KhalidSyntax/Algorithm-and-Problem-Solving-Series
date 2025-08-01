#include <iostream>
#include <cmath>

using namespace std;

int MyFloor(float Number)
{
	if (Number > 0) {
		return Number;
	}
	else {
		if (Number == int(Number)) {
			return int(Number);
		}
		else
		{
			return int(Number) - 1;
		}
	}
}

float ReadNumber()
{
	float Number;
	cout << "Please enter a number? \n";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "\nMy Floor Result: " << MyFloor(Number) << endl;
	cout << "C++ Floor Result: " << floor(Number) << endl;

	return 0;
}