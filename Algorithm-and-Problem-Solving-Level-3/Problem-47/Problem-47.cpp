#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ws: Skips all leading whitespace(spaces, tabs, newlines)
// before reading input, making it useful for cleaning up
// whitespace before any input operation.

// cin.ignore(1, '\n') : Ignores a specified number
// of characters(or until a specified delimiter,
// such as a newline) in the input buffer,
// typically used to skip over specific unwanted
// characters after an input operation.

const string ClientFileName = "ClientsRecord.txt";

struct stClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
};

stClient ReadNewClint()
{
	stClient Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);

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

void AddDataLineToFile(string FileName, string stClients)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << stClients << endl;

		MyFile.close();
	}
}

void AddNewClient()
{
	stClient Client;

	Client = ReadNewClint();

	AddDataLineToFile(ClientFileName, ConvertRecordToLine(Client));
}

void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "\nAdding New Client: \n\n";

		AddNewClient();

		cout << "\nClient Adding Successfully, do you want to add more clients? Y/N? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClients();

	system("pause>0");
	return 0;
}