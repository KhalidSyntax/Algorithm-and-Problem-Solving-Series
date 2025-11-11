#include <iostream>

using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

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

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
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

int main()
{
    cout << "\nEnter Date 1:";
    sDate Date1 = ReadFullDate();

    cout << "\nEnter Date 2:";
    sDate Date2 = ReadFullDate();

    cout << "\n\nCompare Result = "
        << CompareDateFunction(Date1, Date2) << endl;

    system("pause>0");
    return 0;
}