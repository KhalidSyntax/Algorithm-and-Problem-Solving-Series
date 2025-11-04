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

short CountVowelsLetters(string S1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowelLetter(S1[i]))
			Counter++;
	}
	return Counter;
}

int main()
{

	string S1 = ReadString();

	cout << "\nNumber Of Vowels is: ";
	cout << CountVowelsLetters(S1) << endl;

	system("pause>0");

	return 0;
}

