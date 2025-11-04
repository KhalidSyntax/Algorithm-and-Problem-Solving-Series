#include <iostream>
#include <iomanip>

using namespace std;

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

short MinimumNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MinimumNumber = 0;
	MinimumNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] < MinimumNumber)
			{
				MinimumNumber = Matrix[i][j];
			}
		}
	}
	return MinimumNumber;
}

short MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MaxNumber = 0;
	MaxNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] > MaxNumber)
			{
				MaxNumber = Matrix[i][j];
			}
		}
	}
	return MaxNumber;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n Minimum Number is: " << MinimumNumberInMatrix(Matrix1, 3, 3) << endl;

	cout << "\n Max Number is: " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;

	system("pause>0");

	return 0;
}