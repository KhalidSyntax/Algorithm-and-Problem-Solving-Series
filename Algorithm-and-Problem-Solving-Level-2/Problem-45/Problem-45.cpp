#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandNume = rand() % (To - From + 1) + From;
	return RandNume;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Enter number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(-100, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int CountNegativeNumbersInArray(int arr[100], int arrLength)
{
	int Count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0)
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], Length = 0;

	FillArrayWithRandomNumbers(arr, Length);

	cout << "\nArray 1 Elements: \n";
	PrintArray(arr, Length);

	cout << "\nNegative Numbers count is: ";
	cout << CountNegativeNumbersInArray(arr, Length) << endl;

	return 0;
}