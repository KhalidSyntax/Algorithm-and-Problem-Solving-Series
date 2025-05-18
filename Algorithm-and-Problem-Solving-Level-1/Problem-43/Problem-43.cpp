#include <iostream>

using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

strTaskDuration  SecondsToTaskDuration(int TotalSecons)
{
	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Reminder = 0;

	TaskDuration.NumberOfDays = floor(TotalSecons / SecondsPerDay);
	Reminder = TotalSecons % SecondsPerDay;

	TaskDuration.NumberOfHours = floor(Reminder / SecondsPerHour);
	Reminder = Reminder % SecondsPerHour;

	TaskDuration.NumberOfMinutes = floor(Reminder / SecondsPerMinutes);
	Reminder = Reminder % SecondsPerMinutes;

	TaskDuration.NumberOfSeconds = Reminder;

	return TaskDuration;
}

void PrintTaskDurationDetils(strTaskDuration TaskDuration)
{
	cout << endl;
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds : ");

	PrintTaskDurationDetils(SecondsToTaskDuration(TotalSeconds));

	return 0;
}