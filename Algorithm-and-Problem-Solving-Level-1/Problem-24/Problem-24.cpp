#include <iostream>

using namespace std;

short ReadAge()
{
	short Age;

	cout << "Please enter your age between 18 and 45 ? \n";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(short Age, int From, int To)
{
	return Age >= From && Age <= To;
}

void PrintResult(short Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";
	else
		cout << Age << " is invalid age \n";
}

int main()
{
	PrintResult(ReadAge());

	return 0;
}