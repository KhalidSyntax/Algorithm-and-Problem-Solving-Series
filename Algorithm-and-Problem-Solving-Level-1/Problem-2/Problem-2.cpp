#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
	string Name;

	cout << "Please enter your name: \n";
	getline(cin, Name);

	return Name;
}

void PrintName(string Name)
{
	cout << " \n Your Name Is: " << Name << endl;
}

int main()
{
	PrintName(ReadName());

	return 0;
}