#include <iostream>

using namespace std;

void ReadNumber(float& A, float& D)
{

	cout << "Please Enter Rectangle Diagonal A : \n";
	cin >> A;

	cout << "Please Enter Rectangle Side D : \n";
	cin >> D;
}

float RectangleAreaBySideAndDiagona(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nThe Rectangle Area = " << Area << endl;
}

int main()
{
	float Num1, Num2;

	ReadNumber(Num1, Num2);

	PrintArea(RectangleAreaBySideAndDiagona(Num1, Num2));

	return 0;
}
