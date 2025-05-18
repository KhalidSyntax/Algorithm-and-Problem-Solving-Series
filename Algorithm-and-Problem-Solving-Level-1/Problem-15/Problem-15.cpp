#include <iostream>

using namespace std;

void ReadNumber(float& A, float& B)
{
	cout << "Please Enter Rectangle Width A : \n";
	cin >> A;

	cout << "Please Enter Rectangle Length B : \n";
	cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\nThe Rectangle Area = " << Area << endl;
}

int main()
{
	float Num1, Num2;

	ReadNumber(Num1, Num2);
	PrintResult(CalculateRectangleArea(Num1, Num2));

	return 0;
}