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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount : ");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment : ");

	cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	return 0;
}