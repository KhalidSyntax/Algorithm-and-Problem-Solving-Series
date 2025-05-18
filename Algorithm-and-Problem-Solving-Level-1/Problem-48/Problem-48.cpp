#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return (float)LoanAmount / HowManyMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount : ");
	float HowManyMonths = ReadPositiveNumber("Please Enter How Many Months : ");

	cout << "\n Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;


	return 0;
}