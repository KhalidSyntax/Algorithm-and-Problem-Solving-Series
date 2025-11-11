#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
    {
        return 0;
    }

    if (Month == 2)
    {
        return (IsLeapYear(Year)) ? 29 : 28;
    }

    short arr31DaysInMonth[7] = { 1,3,5,7,8,10,12 };

    for (short i = 1; i <= 7; i++)
    {
        if (arr31DaysInMonth[i - 1] == Month)
        {
            return 31;
        }
    }

    return 30;
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