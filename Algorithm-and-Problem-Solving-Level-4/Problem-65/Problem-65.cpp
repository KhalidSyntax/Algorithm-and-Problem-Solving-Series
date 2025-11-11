#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sDate
{
	short Year;
	short Month;
	short Day;
};

string ReadStringDate(string Message)
{
	string DateString;
	cout << Message;
	getline(cin >> ws, DateString);
	return DateString;
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

string ReplaceWordInStringUsingBuiltInFunction(string OriginalString, string StringToReplace, string ReplaceTo)
{
	short Pos = OriginalString.find(StringToReplace);

	while (Pos != std::string::npos)
	{
		OriginalString = OriginalString.replace(Pos, StringToReplace.length(), ReplaceTo);
		Pos = OriginalString.find(StringToReplace);
	}
	return OriginalString;
}

sDate StringToDateStructure(string DateString)
{
	sDate Date;
	vector<string> vDate;

	vDate = SpiltEachWord(DateString, "/");

	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);

	return Date;
}

string DateToString(sDate Date)
{
	return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

string FormateDate(sDate Date, string DateFormat = "dd/mm/yyyy")
{
	string FormattedDateString = "";

	FormattedDateString = ReplaceWordInStringUsingBuiltInFunction(DateFormat, "dd", to_string(Date.Day));
	FormattedDateString = ReplaceWordInStringUsingBuiltInFunction(FormattedDateString, "mm", to_string(Date.Month));
	FormattedDateString = ReplaceWordInStringUsingBuiltInFunction(FormattedDateString, "yyyy", to_string(Date.Year));

	return FormattedDateString;
}

int main()
{
	string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");

	sDate Date = StringToDateStructure(DateString);

	cout << "\n" << FormateDate(Date) << "\n";
	cout << "\n" << FormateDate(Date, "yyyy/dd/mm") << "\n";
	cout << "\n" << FormateDate(Date, "mm/dd/yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "mm-dd-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "dd-mm-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

	system("pause>0");
	return 0;
}
