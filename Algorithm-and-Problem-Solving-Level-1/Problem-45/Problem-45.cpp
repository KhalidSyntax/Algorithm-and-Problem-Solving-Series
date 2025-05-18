#include <iostream>

using namespace std;

enum enMonthOfYear {
	Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7,
	Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number >> To);
	return Number;
}

enMonthOfYear ReadMonthOfYear()
{
	cout << "Jan [1]:\n";
	cout << "Feb [2]:\n";
	cout << "Mar [3]:\n";
	cout << "Apr [4]:\n";

	cout << "May [5]:\n";
	cout << "Jun [6]:\n";
	cout << "Jul [7]:\n";
	cout << "Aug [8]:\n";

	cout << "Sep [9]:\n";
	cout << "Oct [10]:\n";
	cout << "Nov [11]:\n";
	cout << "Dec [12]:\n";
	short N = ReadNumberInRange("Please enter month number: ", 1, 12);
	
	return (enMonthOfYear)N;
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan:
		return "January";

	case enMonthOfYear::Feb:
		return "Febraury";

	case enMonthOfYear::Mar:
		return "March";

	case enMonthOfYear::Apr:
		return "Apri";

	case enMonthOfYear::May:
		return "May";

	case enMonthOfYear::Jun:
		return "June";

	case enMonthOfYear::Jul:
		return "July";

	case enMonthOfYear::Aug:
		return "August";

	case enMonthOfYear::Sep:
		return "September";

	case enMonthOfYear::Oct:
		return "October";

	case enMonthOfYear::Nov:
		return "November";

	case enMonthOfYear::Dec:
		return "December";

	default:
		return "Not A Month Of Year";
	}
}

int main()
{
	cout << "\nMonth is: " << GetMonthOfYear(ReadMonthOfYear()) << endl;


	return 0;
}