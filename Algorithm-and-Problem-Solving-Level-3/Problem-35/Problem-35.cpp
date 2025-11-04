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

void PrintEachWordOfString(string S1)
{
	string delim = " ";  // delimiter

	cout << "\nYour string word are: \n\n";
	short Pos = 0;
	string sWord;

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos); // store the word

		if (sWord != "")
		{
			cout << sWord << endl;
		}
		// erase() until position and move to next word
		S1.erase(0, Pos + delim.length());
	}

	if (S1 != "")
	{
		cout << S1 << endl; // it print last word of the string 
	}
}

int main()
{
	string S1 = ReadString();
	PrintEachWordOfString(S1);

	system("pause>0");
	return 0;
}