#include <iostream>
#include <string>

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

short NumberOfDaysInAYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365;
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

sDate IncreaseDateByXDay(short Days, sDate Date)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}

sDate IncreaseDateByOneWeek(sDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}

sDate IncreaseDateByXWeek(short Weeks, sDate Date)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}

sDate IncreaseDateByOneMonth(sDate Date)
{
    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

    /* Last check day in date should not exceed max days in the current month
     example if date is 31/1/2024 increasing one month
     should not be 31/2/2024, it should be 28/2/2024 */

    short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;
}

sDate IncreaseDateByXMonth(short Months, sDate Date)
{
    for (short i = 1; i <= Months; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}

sDate IncreaseDateByOneYear(sDate Date)
{
    if (IsLeapYear(Date.Year) && Date.Month == 2 && Date.Day == 29)
    {
        Date.Year++;
        Date.Month = 2;
        Date.Day = 28;
        return Date;
    }
    else
    {
        Date.Year++;
        return Date;
    }
}

sDate IncreaseDateByXYear(short Years, sDate Date)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

sDate IncreaseDateByXYearFaster(short Years, sDate Date)
{
    Date.Year += Years;
    return Date;
}

sDate IncreaseDateByOneDecade(sDate Date)
{
    Date.Year += 10;
    return Date;
}

sDate IncreaseDateByXDecade(short Decade, sDate Date)
{
    for (short i = 1; i <= Decade * 10; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

sDate IncreaseDateByXDecadeFaster(short Decade, sDate Date)
{
    Date.Year += Decade * 10;
    return Date;
}

sDate IncreaseDateByOneCentury(sDate Date)
{
    Date.Year += 100;
    return Date;
}

sDate IncreaseDateByOneMillennium(sDate Date)
{
    Date.Year += 1000;
    return Date;
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

void PrintAllDates()
{
    sDate Date = ReadFullDate();

    cout << "\nDate After: \n";

     Date = IncreaseDateByOneDay(Date);
     cout << "\n01-Adding one day is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

     Date = IncreaseDateByXDay(10, Date);
     cout << "\n02-Adding 10 days is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

     Date = IncreaseDateByOneWeek(Date);
     cout << "\n03-Adding One Week is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

     Date = IncreaseDateByXWeek(10,Date);
     cout << "\n04-Adding 10 Weeks is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

     Date = IncreaseDateByOneMonth(Date);
     cout << "\n05-Adding One Month is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

     Date = IncreaseDateByXMonth(5,Date);
     cout << "\n06-Adding 5 Months is: "
         << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneYear(Date);
    cout << "\n07-Adding One Year is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXYear(10, Date);
    cout << "\n08-Adding 10 Years is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXYearFaster(10, Date);
    cout << "\n09-Adding 10 Years (faster) is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneDecade(Date);
    cout << "\n10-Adding One Decade is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXDecade(10, Date);
    cout << "\n11-Adding 10 Decades is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXDecadeFaster(10, Date);
    cout << "\n12-Adding 10 Decades (faster) is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneCentury(Date);
    cout << "\n13-Adding One Century is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneMillennium(Date);
    cout << "\n14-Adding One Millennium is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;
}

int main()
{
    PrintAllDates();

    system("pause>0");
    return 0;
}