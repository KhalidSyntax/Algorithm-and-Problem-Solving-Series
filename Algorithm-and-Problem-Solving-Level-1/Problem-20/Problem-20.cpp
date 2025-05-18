#include <iostream>

using namespace std;

float ReadSquareSide()
{
	float A;

	cout << "Please Enter Square Side A : \n";
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nThe Circle Area is: " << Area << endl;
}

int main()
{
	float Num1;

	PrintArea(CircleAreaInscribedInSquare(ReadSquareSide()));

	return 0;
}