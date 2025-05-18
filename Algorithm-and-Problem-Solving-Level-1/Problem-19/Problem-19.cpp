#include <iostream>

using namespace std;

float ReadDiameter()
{
	float D;

	cout << "Please Enter Diameter D : \n";
	cin >> D;

	return D;
}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(D, 2) / 4);
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nThe Circle Area is: " << Area << endl;
}

int main()
{

	PrintArea(CircleAreaByDiameter(ReadDiameter()));

	return 0;
}