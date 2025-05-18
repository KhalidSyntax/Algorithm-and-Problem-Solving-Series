#include <iostream>

using namespace std;

float ReadCircumFerence()
{
	float L;

	cout << "Please enter Circum Ference L ? \n";
	cin >> L;

	return L;
}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.141592653589793238;

	float Area = pow(L, 2) / (PI * 4);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumFerence()));

	return 0;
}