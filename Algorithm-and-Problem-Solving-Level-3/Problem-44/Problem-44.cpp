#include <iostream>
#include <string>

using namespace std;

string RemoveAllPunctuationsFromString(string S1)
{
	string S2 = "";

	for (short i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}

int main()
{
	string OriginalString = "Welcome to KSA , KSA is a nice country; it's amazing.";

	cout << "\nOriginal String: \n";
	cout << OriginalString << endl;

	cout << "\nPunctuations Removed: \n";
	cout << RemoveAllPunctuationsFromString(OriginalString) << endl;

	system("pause>0");

	return 0;
}