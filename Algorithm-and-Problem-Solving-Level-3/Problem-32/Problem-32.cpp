#include <iostream>

using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character? \n";
	cin >> Ch1;
	return Ch1;
}

bool IsVowelLetter(char C)
{
	C = tolower(C);

	return ((C == 'a') || (C == 'e') || (C == 'i') || (C == 'o') || (C == 'u'));
}

int main()
{

	char C = ReadChar();

	if (IsVowelLetter(C))
		cout << "\nYES: Letter \'" << C << "\' is Vowel.\n";
	else
		cout << "\nNO: Letter \'" << C << "\' is NOT Vowel.\n";

	system("pause>0");

	return 0;
}