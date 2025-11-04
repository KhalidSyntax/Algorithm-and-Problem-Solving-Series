#include <iostream>
#include <iomanip>
#include <cmath>

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

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;

	return(CountNumberInMatrix(Matrix, 0, 3, 3) >= ceil((float)MatrixSize / 2));
}

int main()
{
	srand((unsigned)time(NULL));

	//int Matrix1[3][3] = {
	//	{10,0,12},{20,15,1},{0,0,9}
	//};

	int Matrix1[3][3] = {
	   {0,0,0},{0,0,1},{10,10,9}
	};

	cout << "\n Matrix:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "\n YES: It is sparce. \n";
	else
		cout << "\n NO: It's Not sparce.\n";

	system("pause>0");
	return 0;
}