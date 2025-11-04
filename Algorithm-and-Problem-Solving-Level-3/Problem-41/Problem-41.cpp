#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String? \n";
	getline(cin, S1);
	return S1;
}

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

string ReverseWordsInString(string S1)
{
	vector <string>vString;
	string S2 = "";

	vString = SpiltEachWord(S1, " ");

	// declare iterator
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1); // remove last space.

	return S2;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString After Reversing Words: \n";
	cout << ReverseWordsInString(S1);

	system("pause>0");
	return 0;
}