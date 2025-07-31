#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number ? \n";
	cin >> Number;
	return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(ReadNumber(), arr, arrLength);
		cout << "\nDo you want to add more numbers ? [0]:NO , [1]:YES ?\n";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0;

	InputUserNumbersInArray(arr, arrLength);

	cout << "\nArray Length : " << arrLength << endl;

	cout << "\nArray Elements : ";
	PrintArray(arr, arrLength);

	return 0;
}