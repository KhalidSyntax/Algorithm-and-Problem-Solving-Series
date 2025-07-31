#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int RandNume = rand() % (To - From + 1) + From;
	return RandNume;
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	}
}

string GenerateWord(enCharType CharType, short Length)
{
	string Word;

	for (int i = 1; i <= Length; i++)
	{
		Word = Word + (GetRandomCharacter(CharType));
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array [" << i << "] : ";
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = 0;

	arrLength = ReadPositiveNumber("How many keys do you want to generate ? ");

	FillArrayWithKeys(arr, arrLength);

	cout << "\nArray Elements : \n\n";
	PrintStringArray(arr, arrLength);

	return 0;
}