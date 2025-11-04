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

short CountWords(string S1)
{
	string delim = " ";  // delimiter

	short Pos = 0;
	short Counter = 0;
	string sWord;

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos); // store the word

		if (sWord != "")
		{
			Counter++;
		}
		// erase() until position and move to next word
		S1.erase(0, Pos + delim.length());
	}

	if (S1 != "")
	{
		Counter++;
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();

	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S1) << endl;

	system("pause>0");
	return 0;
}