#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String? \n";
	getline(cin, S1);
	return S1;
}

string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != '-')
		{
			return S1.substr(i, S1.length() - 1);
		}
	}
	return "";
}

string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != '-')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}

int main()
{
	string FullName = "-----Khalid Fahad Mohammed Amri---";

	cout << "\nString = " << FullName << endl;
	cout << "\nTrim Left = " << TrimLeft(FullName) << endl;
	cout << "\nTrim Right = " << TrimRight(FullName) << endl;
	cout << "\nTrim = " << Trim(FullName) << endl;


	system("pause>0");
	return 0;
}