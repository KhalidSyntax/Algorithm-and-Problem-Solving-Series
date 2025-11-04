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

bool IsVowelLetter(char C)
{
	C = tolower(C);

	return ((C == 'a') || (C == 'e') || (C == 'i') || (C == 'o') || (C == 'u'));
}

void PrintVowels(string S1)
{
	cout << "\nVowels in string are: ";

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowelLetter(S1[i]))
			cout << S1[i] << "  ";
	}
}

int main()
{
	string S1 = ReadString();
	PrintVowels(S1);

	system("pause>0");
	return 0;
}