#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String? \n";
	getline(cin, S1);
	return S1;
}

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

string InvertAllStringLettersCase(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();
	cout << "\nString After Inverting All Letters Case: \n";

	S1 = InvertAllStringLettersCase(S1);
	cout << S1 << endl;

	system("pause>0");

	return 0;
}