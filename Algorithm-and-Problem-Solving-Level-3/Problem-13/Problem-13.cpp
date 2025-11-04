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

bool AreIdenttityMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && Matrix1[i][j] != 1)
			{
				return false;
			}

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

	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	// int Matrix1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (AreIdenttityMatrix(Matrix1, 3, 3))
		cout << "\n YES: Matrix is identtity. \n";
	else
		cout << "\n NO: Matrix is Not identtity.\n";

	system("pause>0");
	return 0;
}