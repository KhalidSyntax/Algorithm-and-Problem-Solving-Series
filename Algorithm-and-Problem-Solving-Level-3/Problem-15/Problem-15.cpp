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

short CountNumberInMatrix(int Matrix1[3][3], short CheckNumber, short Rows, short Cols)
{
	short NumberCount = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == CheckNumber)
			{
				NumberCount++;
			}
		}
	}
	return NumberCount;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	short CheckNumber;
	cout << "\nEnter the number to count in matrix? ";
	cin >> CheckNumber;

	cout << "\nNumber " << CheckNumber << " count in matrix is: " << CountNumberInMatrix(Matrix1, CheckNumber, 3, 3) << endl;

	system("pause>0");
	return 0;
}

