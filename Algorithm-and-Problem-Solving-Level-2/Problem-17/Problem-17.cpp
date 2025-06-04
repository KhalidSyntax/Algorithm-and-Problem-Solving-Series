#include <iostream>

using namespace std;

string ReadPassword()
{
	string Password = "";
	cout << "Please enter a 3-Letter Password (ALl Capital) ? \n";
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	cout << "\n";
	string Word = "";
	int Counter = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);

				Counter++;

				cout << "Trial [" << Counter << "] : " << Word << endl;

				if (Word == OriginalPassword)
				{
					cout << "\nPassword is : " << Word << endl;
					cout << "Found after " << Counter << " Trial(s). \n";

					return true;
				}

				Word = "";
			}
		}
		cout << "\n_______________________\n";
	}
	return false;
}

int main()
{
	GuessPassword(ReadPassword());

	return 0;
}