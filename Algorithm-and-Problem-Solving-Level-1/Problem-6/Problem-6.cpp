#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
};

strInfo ReadName()
{
	strInfo Info;

	cout << "Please Enter First Name : \n";
	cin >> Info.FirstName;

	cout << "Please Enter Last Name : \n";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(strInfo Info, bool reverse = false)
{
	string FullName;
	if (reverse)
		FullName = Info.LastName + "  " + Info.FirstName;
	else
		FullName = Info.FirstName + "  " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << " \n Your Full Name is : " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadName(),true));

	return 0;
}