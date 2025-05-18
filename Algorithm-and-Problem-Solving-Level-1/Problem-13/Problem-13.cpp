#include <iostream>

using namespace std;

void ReadNumber(short& A, short& B, short& C)
{
	cout << "Please Enter Number A : \n";
	cin >> A;

	cout << "Please Enter Number B : \n";
	cin >> B;

	cout << "Please Enter Number C : \n";
	cin >> C;
}

int Max3Number(short A, short B, short C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;

	else if (B > C)
		return B;
	else
		return C;
}

void PrintResult(int Max)
{
	cout << " \n The Maximum Number is : " << Max << endl;
}

int main()
{
	short A, B, C;

	ReadNumber(A, B, C);
	PrintResult(Max3Number(A, B, C));

	return 0;
}
