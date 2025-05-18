#include <iostream>

using namespace std;

void ReadNumber(short& Number1, short& Number2)
{
	cout << "Please Enter Number 1 : \n";
	cin >> Number1;

	cout << "Please Enter Number 2 : \n";
	cin >> Number2;
}

int Max2Number(short Number1, short Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintResult(int Max)
{
	cout << " \n The Maximum Number is : " << Max << endl;
}

int main()
{
	short Num1, Num2;

	ReadNumber(Num1, Num2);
	PrintResult(Max2Number(Num1, Num2));

	return 0;
}
