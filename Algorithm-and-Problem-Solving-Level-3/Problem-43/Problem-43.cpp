#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> SpiltEachWord(string S1, string Delim)
{
	vector <string> vString;
	short Pos = 0;
	string sWord;

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos); // store the word

		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		// erase() until position and move to next word
		S1.erase(0, Pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1); // it print last word of the string 
	}
	return vString;
}

string LowerAllString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string JoinString(vector <string>& vString, string Delim)
{
	string S1 = "";

	for (string& str : vString)
	{
		S1 = S1 + str + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string ReplaceWordsInStringUsingSpilt(string OriginalString, string WordToReplace, string ToReplace, bool MatchCase = true)
{
	vector<string> vString;

	vString = SpiltEachWord(OriginalString, " ");

	for (string& str : vString)
	{
		if (MatchCase)
		{
			if (str == WordToReplace)
			{
				str = ToReplace;
			}
		}
		else
		{
			if (LowerAllString(str) == LowerAllString(WordToReplace))
			{
				str = ToReplace;
			}
		}
	}

	return JoinString(vString, " ");

}

int main()
{
	string OriginalString = "Welcome to USA , USA is a nice country.";
	string WordToReplace = "usa";
	string ToReplace = "KSA";

	cout << "\nOriginal String: \n";
	cout << OriginalString << endl;

	cout << "\n\nReplace With Match Case: \n";
	cout << ReplaceWordsInStringUsingSpilt(OriginalString, WordToReplace, ToReplace) << endl;

	cout << "\n\nReplace With Not Match Case: \n";
	cout << ReplaceWordsInStringUsingSpilt(OriginalString, WordToReplace, ToReplace, false) << endl;

	system("pause>0");
	return 0;
}