#include <iostream>
#include <string>

using namespace std;

enum enWhatToCount { SmallLetters = 0, CapitalLetter = 1, Digit = 2, Punct = 3, All = 4 };

short CountLetters(string S1, enWhatToCount WhatToCount)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}

	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetter && isupper(S1[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::Digit && isdigit(S1[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::Punct && ispunct(S1[i]))
			Counter++;
	}
	return Counter;
}

string ReadString()
{
	string S1;
	cout << "Please Enter Your String? \n";
	getline(cin, S1);
	return S1;
}

short CountCapitalLetters(string S1)
{
	short CapitalCount = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] = isupper(S1[i]))
			CapitalCount++;
	}
	return CapitalCount;
}

short CountSmalllLetters(string S1)
{
	short SmallCount = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] = islower(S1[i]))
			SmallCount++;
	}
	return SmallCount;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString Length = " << S1.length() << endl;
	cout << "\nCapital Letters Count = " << CountCapitalLetters(S1) << endl;
	cout << "\nSmall Letters Count   = " << CountSmalllLetters(S1) << endl;

	cout << "\n\nMethod-2\n";

	cout << "\nString Length = " << CountLetters(S1, enWhatToCount::All) << endl;
	cout << "\nCapital Letters Count = " << CountLetters(S1, enWhatToCount::CapitalLetter) << endl;
	cout << "\nSmall Letters Count   = " << CountLetters(S1, enWhatToCount::SmallLetters) << endl;
	cout << "\nDigit Count  = " << CountLetters(S1, enWhatToCount::Digit) << endl;
	cout << "\nPunctuation Count  = " << CountLetters(S1, enWhatToCount::Punct) << endl;

	system("pause>0");

	return 0;
}