#include <iostream>

using namespace std;

float ReadRadious()
{
	float R;
	cout << "Please Enter Radious R : \n";
	cin >> R;
	return R;
}

float CalculateArea(float R)
{
	const float PI = 3.141592653589793238;
	float Area = pow(R, 2) * PI;
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nThe Circle Area is: " << Area << endl;
}

int main()
{

	PrintArea(CalculateArea(ReadRadious()));

	return 0;
}