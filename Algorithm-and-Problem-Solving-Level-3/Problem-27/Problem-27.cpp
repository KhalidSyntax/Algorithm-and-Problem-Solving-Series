#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Character? \n";
	cin >> Ch1;
	return Ch1;
}

char InvertCharacterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

int main()
{
	char C = ReadChar();
	cout << "\nChar After Inverting Case: \n";
	C = InvertCharacterCase(C);
	cout << C << endl;


	system("pause>0");

	return 0;
}