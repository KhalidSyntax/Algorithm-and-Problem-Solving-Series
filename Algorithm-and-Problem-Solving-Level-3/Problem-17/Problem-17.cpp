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
		}
		cout << "\n";
	}
}

bool IsExistsMatrix(int Matrix1[3][3], short CheckNumber, short Rows, short Cols)
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

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	short CheckNumber;
	cout << "\n Please Enter the number to look for in matrix? ";
	cin >> CheckNumber;

	if (IsExistsMatrix(Matrix1, CheckNumber, 3, 3))
		cout << "\n YES: It is there. \n";
	else
		cout << "\n NO: It's Not there.\n";

	system("pause>0");
	return 0;
}