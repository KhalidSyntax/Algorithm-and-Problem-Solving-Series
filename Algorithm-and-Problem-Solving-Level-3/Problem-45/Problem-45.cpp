#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct stClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
};

stClient ReadNewClint()
{
	stClient Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);

	// Usage of std::ws will extract all the 
	// whitespace character
	// whitespace 

	cout << "Enter Pin Code? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(stClient Client, string Separator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

int main()
{
	stClient Client;

	cout << "\nPlease Enter Client Data: \n\n";
	Client = ReadNewClint();

	cout << "\n\nClient Record For Saving is: \n";
	cout << ConvertRecordToLine(Client) << endl;

	system("pause>0");
	return 0;
}