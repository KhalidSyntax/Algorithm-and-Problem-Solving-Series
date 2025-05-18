#include <iostream>

using namespace std;

void ReadNumber(short& A, short& B)
{
	cout << "Please Enter Number A : \n";
	cin >> A;

	cout << "Please Enter Number B : \n";
	cin >> B;
}

void Swap(short& A, short& B)
{
	short Temp;
	Temp = A;
	A = B;
	B = Temp;
}

void PrintResult(short A, short B)
{
	cout << "\nNumber 1 = " << A << endl;
	cout << "Number 2 = " << B << endl;
}

int main()
{
	short Num1, Num2;

	ReadNumber(Num1, Num2);
	PrintResult(Num1, Num2);

	Swap(Num1, Num2);
	PrintResult(Num1, Num2);

	return 0;
}