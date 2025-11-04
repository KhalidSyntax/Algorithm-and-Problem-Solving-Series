#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientFileName = "ClientsRecord.txt";

struct stClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;
};

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

stClient ConvertLineToRecord(string LineRecord, string Separator = "#//#")
{
	vector <string>vClientData;
	vClientData = SpiltEachWord(LineRecord, Separator);

	stClient Client;

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stoi(vClientData[4]); // cast string to int

	return Client;
}

string ConvertRecordToLine(stClient Client, string Separator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

vector<stClient> LoadDataFromFileToVector(string ClientFileName)
{
	fstream MyFile;

	stClient Client;
	vector<stClient>vClients;

	MyFile.open(ClientFileName, ios::in); // Read Mode

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

void PrintClientRecord(stClient Client)
{
	cout << "\nThe Following are The Client Details: \n\n";

	cout << "Account Number  : " << Client.AccountNumber << endl;
	cout << "Pin Code        : " << Client.PinCode << endl;
	cout << "Name            : " << Client.Name << endl;
	cout << "Phone           : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.AccountBalance << endl;
}

bool FindClientByAccountNumber(string AccountNumber, stClient& Client, vector<stClient>& vClient)
{
	for (stClient C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

stClient ChangeClientRecord(string AccountNumber)
{
	stClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "\nEnter Pin Code? ";
	getline(cin >> ws, Client.PinCode);

	cout << "\nEnter Name? ";
	getline(cin, Client.Name);

	cout << "\nEnter Phone? ";
	getline(cin, Client.Phone);

	cout << "\nEnter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

vector<stClient>SaveClientDataToFile(string FileName, vector<stClient>& vClient)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out); // OverWrite

	string DataLine;

	if (MyFile.is_open())
	{
		for (stClient C : vClient)
		{
			DataLine = ConvertRecordToLine(C);
			MyFile << DataLine << endl;
		}
		MyFile.close();
	}
	return vClient;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<stClient>& vClient)
{
	stClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, Client, vClient))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want delete clinet? Y/N? ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			for (stClient& C : vClient)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}
			SaveClientDataToFile(ClientFileName, vClient);

			cout << "\n\nClient Updated Successfully.";
			return true;
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found! ";
		return false;
	}
}

string ReadClientAccountNumber()
{
	string AccountNumber;
	cout << "Please Enter Account Number? ";
	cin >> AccountNumber;
	return AccountNumber;
}

int main()
{
	vector<stClient>vClient = LoadDataFromFileToVector(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(AccountNumber, vClient);

	system("pause>0");
	return 0;
}