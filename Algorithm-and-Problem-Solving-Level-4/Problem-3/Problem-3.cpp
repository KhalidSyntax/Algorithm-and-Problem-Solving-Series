#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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

    (IsLeapYear(Year)) ?
        cout << "\nYes, [" << Year << "] is a leap year.\n" :
        cout << "\nNo, [" << Year << "] is Not a leap year.\n";

    system("pause>0");
    return 0;
}