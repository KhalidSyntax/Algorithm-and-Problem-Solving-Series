#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInAYear(short Year)
{
    return NumberOfDaysInAYear(Year) * 24;
}

int NumberOfMinutesInAYear(short Year)
{
    return NumberOfHoursInAYear(Year) * 60;
}

int NumberOfSecondsInAYear(short Year)
{
    return NumberOfMinutesInAYear(Year) * 60;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();

    cout << "\nNumber of Days    in [" << Year << "] is "
        << NumberOfDaysInAYear(Year) << endl;

    cout << "Number of Hours   in [" << Year << "] is "
        << NumberOfHoursInAYear(Year) << endl;

    cout << "Number of Minutes in [" << Year << "] is "
        << NumberOfMinutesInAYear(Year) << endl;

    cout << "Number of Seconds in [" << Year << "] is "
        << NumberOfSecondsInAYear(Year) << endl;

    system("pause>0");
    return 0;
}