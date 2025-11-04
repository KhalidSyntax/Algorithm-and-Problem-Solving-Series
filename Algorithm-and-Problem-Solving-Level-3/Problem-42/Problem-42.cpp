#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string OriginalString, string StringToReplace, string ReplaceTo)
{
	short Pos = OriginalString.find(StringToReplace);

	while (Pos != std::string::npos)
	{
		OriginalString = OriginalString.replace(Pos, StringToReplace.length(), ReplaceTo);
		Pos = OriginalString.find(StringToReplace);
	}
	return OriginalString;
}

int main()
{
	string OriginalString = "Welcome to USA , USA is a nice country.";
	string StringToReplace = "USA";
	string ReplaceTo = "Saudi Arabia";

	cout << "\nOriginal String: \n" << OriginalString;
	cout << "\n\nString After Replace: \n";
	cout << ReplaceWordInStringUsingBuiltInFunction(OriginalString, StringToReplace, ReplaceTo) << endl;

	system("pause>0");

	return 0;
}