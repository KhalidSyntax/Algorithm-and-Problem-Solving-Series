#include <iostream>
#include <iomanip>

using namespace std;

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
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

void TransposedMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTransposed[i][j] = arr[j][i];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arrTransposed[3][3];
	FillMatrixWithOrederedNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);

	TransposedMatrix(arr, arrTransposed, 3, 3);

	cout << "\nThe following is a 3x3 Transposed matrix:\n";
	PrintMatrix(arrTransposed, 3, 3);

	system("pause>0");
	return 0;
}