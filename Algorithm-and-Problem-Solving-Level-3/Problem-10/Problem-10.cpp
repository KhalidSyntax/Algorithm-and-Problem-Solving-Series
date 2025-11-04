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
			// cout << setw(3) << arr[i][j] << "    ";
			printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n Sum of Matrix is: " << SumOfMatrix(Matrix1, 3, 3) << endl;
	system("pause>0");

	return 0;
}