#include <iostream>
#include <cstdlib>

using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 10;

	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
			return i;
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& arrDestinationLength)
{
	for (int i = 0; i < SourceLength; i++)
	{
		if (!IsNumberInArray(arrSource[i], arrDestination, SourceLength))
		{
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arrSource[100], SourceLength = 0,
		arrDestination[100], arrDestinationLength = 0;

	FillArray(arrSource, SourceLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arrSource, SourceLength);

	CopyDistinctNumbersToArray(arrSource, arrDestination, SourceLength, arrDestinationLength);

	cout << "\nArray 1 distinct Elements : \n";
	PrintArray(arrDestination, arrDestinationLength);

	return 0;
}