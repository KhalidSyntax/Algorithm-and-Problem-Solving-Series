#include <iostream>

using namespace std;

struct strTaskDuration
{
	int NumberfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberfDays = ReadPositiveNumber("Please Enter Number Of Days ? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours ? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes ? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds ? ");

	return TaskDuration;

}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{
	cout << endl << "Task Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;

	return 0;
}