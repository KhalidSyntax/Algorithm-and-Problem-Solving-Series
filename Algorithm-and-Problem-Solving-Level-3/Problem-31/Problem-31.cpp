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

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character? \n";
	cin >> Ch1;
	return Ch1;
}

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();
	char C = ReadChar();

	cout << "\nLetter \'" << C << "\'  Count = " << CountLetter(S1, C) << endl;

	cout << "\nLetter \'" << C << "\' ";
	cout << "OR \'" << InvertLetterCase(C) << "\' ";
	cout << "Count = " << CountLetter(S1, C, false) << endl;

	system("pause>0");

	return 0;
}