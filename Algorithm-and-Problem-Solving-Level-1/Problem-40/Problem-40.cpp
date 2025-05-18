#include <iostream>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill *= 1.1;
	TotalBill *= 1.16;

	return TotalBill;

}

void PrintTotalBillAfterServiceAndTax()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill ? ");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service And Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
}

int main()
{
	PrintTotalBillAfterServiceAndTax();

	return 0;
}