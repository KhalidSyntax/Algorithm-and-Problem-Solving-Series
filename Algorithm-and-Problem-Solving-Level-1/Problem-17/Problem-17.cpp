#include <iostream>

using namespace std;

void ReadNumber(float& A, float& H)
{

	cout << "Please Enter Triangle Base A : \n";
	cin >> A;

	cout << "Please Enter Triangle Height H : \n";
	cin >> H;
}

float TriangleArea(float A, float H)
{
	float Area = A / 2 * H;
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nThe Triangle Area = " << Area << endl;
}

int main()
{
	float Num1, Num2;

	ReadNumber(Num1, Num2);

	PrintArea(TriangleArea(Num1, Num2));

	return 0;
}
