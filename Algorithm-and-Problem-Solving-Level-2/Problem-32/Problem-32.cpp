#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Enter number of elements :\n";
	cin >> arrLength;
	cout << "\n";

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

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[arrLength - 1 - i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];

	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Elements in reverse : \n";
	PrintArray(arr2, arrLength);

	return 0;
}