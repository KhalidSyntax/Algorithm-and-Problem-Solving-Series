#include <iostream>

using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Grade;

	do
	{
		cout << "Please enter a grade between 0 and 100 ? \n";
		cin >> Grade;

	} while (Grade < From || Grade > To);
	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << "\nResult = " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

	return 0;
}