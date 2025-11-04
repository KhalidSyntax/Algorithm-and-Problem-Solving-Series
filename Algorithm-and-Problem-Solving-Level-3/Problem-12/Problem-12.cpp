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

void FillMatrixWithOrederedNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// cout << setw(3) << arr[i][j] << "    ";
			printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithOrederedNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithOrederedNumbers(Matrix2, 3, 3);
	cout << "\n Matrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\n YES: Both Matrices are typical. \n";
	else
		cout << "\n NO: Matrices are Not typical.\n";

	system("pause>0");
	return 0;
}