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
		arr[i] = RandomNumber(1, 100);
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

int CountOddNumbersInArray(int arr[100], int arrLength)
{
	int Count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
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

	cout << "\nOdd Numbers count is: ";
	cout << CountOddNumbersInArray(arr, Length) << endl;

	return 0;
}