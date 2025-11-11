#include <iostream>

using namespace std;

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

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
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

string DayName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sunday", "Monday", "Tuesday", "Wednesday","Thrusday","Friday","Saturday" };
    return arrDayNames[DayOfWeekOrder];
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    cout << endl;
    cout << "\nDate        : " << Day << "/" << Month << "/" << Year;
    cout << "\nDay Order   : " << DayOfWeekOrder(Day, Month, Year);
    cout << "\nDay Name    : " << DayName(DayOfWeekOrder(Day, Month, Year));

    system("pause>0");
    return 0;
}