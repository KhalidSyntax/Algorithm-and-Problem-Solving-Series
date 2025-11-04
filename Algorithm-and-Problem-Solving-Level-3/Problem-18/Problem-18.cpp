#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number  
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

bool IsNumberInMatrix(int Matrix1[3][3], short CheckNumber, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == CheckNumber)
			{
				return true;
			}
		}
	}
	return false;
}

void PrintIntersectedNumbersInMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	short Number = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Number = Matrix1[i][j];
			if (IsNumberInMatrix(Matrix2, Number, Rows, Cols))
			{
				cout << setw(3) << Number << "   ";
			}
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n Matrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "\n Intersected Numbers are: " << endl;
	PrintIntersectedNumbersInMatrices(Matrix1, Matrix2, 3, 3);

	system("pause>0");

	return 0;
}

