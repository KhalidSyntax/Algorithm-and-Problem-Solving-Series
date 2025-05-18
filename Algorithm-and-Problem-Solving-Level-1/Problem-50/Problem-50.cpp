#include <iostream>

using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please Enter Pin Code \n";
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	string PinCode;
	short Counter = 3;

	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nWrong PIN , you have " << Counter << " more tries \n";
			system("color 4F");
		}

	} while (PinCode != "1234" && Counter >= 1);
	return false;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\n Your account balance is " << 7500 << '\n';
	}
	else
	{
		cout << "\n Your card blocked call the bank for help. \n";
	}

	return 0;
}