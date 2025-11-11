#include <iostream>

using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ?
            (Date1.Month < Date2.Month ? true :
                (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

sDate IncreaseDateByOneDay(sDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Month++;
            Date.Day = 1;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
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

short DayOfWeekOrder(sDate Date)
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sunday", "Monday", "Tuesday", "Wednesday","Thrusday","Friday","Saturday" };
    return arrDayNames[DayOfWeekOrder];
}

bool IsWeekEnd(sDate Date)
{
    //Weekends are Fri and Sat
    short WeekEnd = DayOfWeekOrder(Date);
    return WeekEnd == 5 || WeekEnd == 6;
}

bool IsBusinessDay(sDate Date)
{
    //Weekends are Sun,Mon,Tue,Wed and Thur

    /*short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex >= 0 && DayIndex <= 4);*/

    //shorter method is to invert the IsWeekEnd: this will save updating code.
    return !IsWeekEnd(Date);
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
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadDay()
{
    short Day;
    cout << "Please enter a Day? ";
    cin >> Day;
    return Day;
}

sDate ReadFullDate()
{
    sDate Date;

    Date.Year = ReadYear();
    Date.Month = ReadMonth();
    Date.Day = ReadDay();

    return Date;
}

short CalculateVacationDays(sDate DateFrom, sDate DateTo)
{
    short DaysCount = 0;

    while (IsDate1BeforeDate2(DateFrom, DateTo))
    {
        if (IsBusinessDay(DateFrom))
            DaysCount++;

        DateFrom = IncreaseDateByOneDay(DateFrom);
    }
    return DaysCount;
}

int main()
{
    cout << "\nVacation Starts: ";
    sDate DateFrom = ReadFullDate();

    cout << "\nVacation Ends: ";
    sDate DateTo = ReadFullDate();

    cout << "\nVacation From: " << DayName(DayOfWeekOrder(DateFrom)) << " , ";
    cout << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year;

    cout << "\nVacation End  : " << DayName(DayOfWeekOrder(DateTo)) << " , ";
    cout << DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year;

    cout << "\n\nActual Vacation Days is: " << CalculateVacationDays(DateFrom, DateTo) << endl;

    system("pause>0");
    return 0;
}