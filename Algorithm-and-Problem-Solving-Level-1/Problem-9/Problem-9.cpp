#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter first number ? \n";
	cin >> Num1;

	cout << "Please enter second number ? \n";
	cin >> Num2;

	cout << "Please enter third number ? \n";
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
	cout << " \n The total sum of number is: " << Total << endl;
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResult(SumOf3Numbers(Num1, Num2, Num3));

	return 0;
}