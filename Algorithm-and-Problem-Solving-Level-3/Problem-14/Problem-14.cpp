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

bool IsScalarMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int FirstDiagElement = Matrix1[0][0];

	if (FirstDiagElement == 0)
		return false;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// Check for diagonals element
			if (i == j && Matrix1[i][j] != FirstDiagElement)
			{
				return false;
			}
			// Check for rest element
			else if (i != j && Matrix1[i][j] != 0)
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

	// int Matrix1[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	int Matrix1[3][3] = { {6,0,0},{0,6,0},{0,0,6} };

	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsScalarMatrix(Matrix1, 3, 3))
		cout << "\n YES: Matrix is scalar. \n";
	else
		cout << "\n NO: Matrix is NOT scalar.\n";

	system("pause>0");
	return 0;
}