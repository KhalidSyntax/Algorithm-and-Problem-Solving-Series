#include <iostream>

using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

struct sPeriod
{
    sDate StartDate;
    sDate EndDate;
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

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return
        (Date1.Year == Date2.Year) ?
        ((Date1.Month == Date2.Month) ?
            ((Date1.Day == Date2.Day) ? true : false) :
            false) :
        false;
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

enum enCompareDates { Before = -1, Equal = 0, After = 1 };

enCompareDates CompareDateFunction(sDate Date1, sDate Date2)
{
    enCompareDates CompareDates;

    if (IsDate1BeforeDate2(Date1, Date2))
        return enCompareDates::Before;

    if (IsDate1EqualDate2(Date1, Date2))
        return enCompareDates::Equal;

    //if (IsDate1AfterDate2(Date1, Date2))
    //    return enCompareDates::After;

    // Faster
    else
        return enCompareDates::After;

}

bool IsDateInPeriod(sPeriod Period, sDate DateToCheck)
{
    return !(CompareDateFunction(DateToCheck, Period.StartDate) == enCompareDates::Before
        ||
        CompareDateFunction(DateToCheck, Period.EndDate) == enCompareDates::After);
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

sPeriod ReadPeriod()
{
    sPeriod Period;

    cout << "\nEnter Start Date: \n";
    Period.StartDate = ReadFullDate();

    cout << "\nEnter End Date: \n";
    Period.EndDate = ReadFullDate();

    return Period;
}

int main()
{
    cout << "\nEnter Period :";
    sPeriod Period = ReadPeriod();

    cout << "\nEnter Date to check: \n";
    sDate DateToCheck = ReadFullDate();

    IsDateInPeriod(Period, DateToCheck) ?
        cout << "\nYes: Date is within period." :
        cout << "\nNo: Date is NOT within period.";

    system("pause>0");
    return 0;
}