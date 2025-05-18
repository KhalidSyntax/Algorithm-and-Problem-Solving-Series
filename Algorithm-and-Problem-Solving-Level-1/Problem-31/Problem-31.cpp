#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a number ? \n";
	cin >> Number;

	return Number;
}

void PowerOf2_3_4(int Number)
{
	int A, B, C;

	A = Number * Number;
	B = Number * Number * Number;
	C = Number * Number * Number * Number;

	cout << "\nPower ^ 2 = " << A << endl;
	cout << "\nPower ^ 3 = " << B << endl;
	cout << "\nPower ^ 4 = " << C << endl;
}

int main()
{
	PowerOf2_3_4(ReadNumber());

	return 0;
}