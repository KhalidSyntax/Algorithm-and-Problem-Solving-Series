#include <iostream>
#include <string>
#include <iomanip>

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
        return 0;

    short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a Year? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // Gregorian:
    // 0:sun, 1:Mon, 2:Tue...etc

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed","Thr","Fri","Sat" };
    return arrDayNames[DayOfWeekOrder];
}

string MonthShortName(short Month)
{
    string arrMonthNames[] = { "","Jan", "Feb", "Mar","Apr", "May", "Jun", "Jul","Aug","Sep","Oct","Nov","Dec" };
    return arrMonthNames[Month];
}

void PrintMonthCalender(short Month, short Year)
{
    // index of the day from 0 to 6
    short Current = DayOfWeekOrder(1, Month, Year);

    short NumberOfDays = NumberOfDaysInAMonth(Month, Year);

    // print the current month name
    printf("\n _______________%s_______________\n\n",
        MonthShortName(Month).c_str());

    // print thr columns
    printf("  Sun  Mon  Tue  Wed  Thr  Fri  Sat\n");

    // print appropriate spaces
    short i;
    for (i = 0; i < Current; i++)
        printf("     ");

    for (short j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    printf("\n _________________________________\n");
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    PrintMonthCalender(Month, Year);

    system("pause>0");
    return 0;
}