#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// Two Line of Code
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short NumberOfHoursInAMonth(short Month, short Year)
{
    return NumberOfDaysInAMonth(Month, Year) * 24;
}

int NumberOfMinutesInAMonth(short Month, short Year)
{
    return NumberOfHoursInAMonth(Month, Year) * 60;
}

int NumberOfSecondsInAMonth(short Month, short Year)
{
    return NumberOfMinutesInAMonth(Month, Year) * 60;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a Year to check? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month to check? ";
    cin >> Month;
    return Month;
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber of Days    in [" << Month << "] is "
        << NumberOfDaysInAMonth(Month, Year) << endl;

    cout << "Number of Hours   in [" << Month << "] is "
        << NumberOfHoursInAMonth(Month, Year) << endl;

    cout << "Number of Minutes in [" << Month << "] is "
        << NumberOfMinutesInAMonth(Month, Year) << endl;

    cout << "Number of Seconds in [" << Month << "] is "
        << NumberOfSecondsInAMonth(Month, Year) << endl;

    system("pause>0");
    return 0;
}