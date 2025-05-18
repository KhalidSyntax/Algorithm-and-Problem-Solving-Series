#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(short& Mark1, short& Mark2, short& Mark3)
{
	cout << "Please Enter Mark 1 : \n";
	cin >> Mark1;

	cout << "Please Enter Mark 2 : \n";
	cin >> Mark2;

	cout << "Please Enter Mark 3 : \n";
	cin >> Mark3;
}

int SumOf3Marks(short Mark1, short Mark2, short Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AverageOf3Marks(short Mark1, short Mark2, short Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckMarks(int Average)
{

	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Average)
{
	cout << " \n The Average is : " << Average << endl;

	if (CheckMarks(Average) == enPassFail::Pass)
		cout << " \n You Passed \n";
	else
		cout << " \n You Failed \n";
}

int main()
{
	short Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(AverageOf3Marks(Mark1, Mark2, Mark3));

	return 0;
}