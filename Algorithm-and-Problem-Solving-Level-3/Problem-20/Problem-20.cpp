#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << Matrix[i][j] << "    ";
		}
		cout << "\n";
	}
}

bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
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

	// int Matrix1[3][3] = { {1,2,1},{55,3,5},{9,6,9} };
	int Matrix1[3][3] = { {1,2,1},{5,3,5},{9,6,9} };

	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1, 3, 3))
		cout << "\n YES: Matrix is Palindrome.\n";
	else
		cout << "\n NO: Matrix is Not Palindrome.\n";

	system("pause>0");

	return 0;
}