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

int main()
{
	vector <string> vString{ "Khaled","Fahad","Mohammed","Amri" };

	cout << "\nVector After Join: \n" <<
		JoinString(vString, "-") << endl;

	system("pause>0");
	return 0;
}