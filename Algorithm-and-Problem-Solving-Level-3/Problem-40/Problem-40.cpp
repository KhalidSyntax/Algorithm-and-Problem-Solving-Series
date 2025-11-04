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

string JoinString(vector <string>& vString, string Delim)
{
	string S1 = "";

	for (string& str : vString)
	{
		S1 = S1 + str + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string arrString[], short Length, string Delim)
{
	string S1 = "";
	for (short i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
	vector <string> vString{ "Khaled","Fahad","Mohammed","Amri" };
	string arrString[] = { "Khalid","Fahad" ,"Mohammed","Amri" };

	cout << "\nVector After Join: \n" <<
		JoinString(vString, "-") << endl;


	cout << "\nArray After Join: \n" <<
		JoinString(arrString, 4, "#") << endl;

	system("pause>0");

	return 0;
}