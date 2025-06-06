#include <iostream>

using namespace std;

void ReadTriangleData(float& A, float& B)
{

	cout << "Please enter Triangle Side A ? \n";
	cin >> A;

	cout << "Please enter triangle base B ? \n";
	cin >> B;
}

float CircleAreaByTriangle(float A, float B)
{
	const float PI = 3.141592653589793238;

	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadTriangleData(A, B);
	PrintResult(CircleAreaByTriangle(A, B));

	return 0;
}