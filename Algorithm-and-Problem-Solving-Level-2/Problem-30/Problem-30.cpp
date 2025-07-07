#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
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

void Sum2Array(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr[i] + arr2[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrSum[100];

	int arrLength = ReadPositiveNumber("Enter number of elements :");

	FillArrayWithRandomNumbers(arr, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	Sum2Array(arr, arr2, arrSum, arrLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Elements : \n";
	PrintArray(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements : \n";
	PrintArray(arrSum, arrLength);

	return 0;
}