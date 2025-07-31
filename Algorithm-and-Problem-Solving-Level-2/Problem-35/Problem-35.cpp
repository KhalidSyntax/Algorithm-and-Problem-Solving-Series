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
	cout << "Enter number of elements :\n";
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

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
			return i;
	}
	return -1;
}

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for ? \n";
	cin >> Number;
	return Number;
}

bool CheckNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = 0;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is : " << Number << endl;

	if (CheckNumberInArray(Number, arr, arrLength))
	{
		cout << "\nYes, The number is found :-)\n";
	}
	else
	{
		cout << "\nNo, The number is not found :-(\n";
	}

	return 0;
}