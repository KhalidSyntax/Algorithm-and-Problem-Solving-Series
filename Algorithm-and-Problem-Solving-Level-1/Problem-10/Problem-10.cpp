#include <iostream>
#include <string>

using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter Mark 1 ? \n";
	cin >> Mark1;

	cout << "Please enter Mark 2 ? \n";
	cin >> Mark2;

	cout << "Please enter Mark 3 ? \n";
	cin >> Mark3;
}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AverageOfMarks(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(int Average)
{
	cout << " \n The average is: " << Average << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(AverageOfMarks(Mark1, Mark2, Mark3));

	return 0;
}