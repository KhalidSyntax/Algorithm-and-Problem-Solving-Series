#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number  
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
			// printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

void PrintMiddleRowsOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleRows = Rows / 2;

	for (short j = 0; j < Cols; j++)
	{
		printf(" %0*d   ", 2, arr[MiddleRows][j]);
	}
	cout << "\n";
}

void PrintMiddleColsOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleCols = Cols / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf(" %0*d   ", 2, arr[i][MiddleCols]);
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n Middle Row of Matrix1 is: \n";
	PrintMiddleRowsOfMatrix(Matrix1, 3, 3);

	cout << "\n Middle Col of Matrix1 is: \n";
	PrintMiddleColsOfMatrix(Matrix1, 3, 3);

	system("pause>0");

	return 0;
}