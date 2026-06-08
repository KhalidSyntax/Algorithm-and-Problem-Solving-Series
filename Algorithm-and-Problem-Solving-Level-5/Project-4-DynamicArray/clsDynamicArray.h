#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
private:
	int _Size = 0;
	T* _OriginalArray;

public:

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		_OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] _OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || Index < 0)
			return false;

		_OriginalArray[Index] = Value;
		return true;
	}

	int Size() const
	{
		return _Size;
	} 

	bool IsEmpty()
	{
		return _Size == 0;
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << _OriginalArray[i] << " ";
		}
		cout << "\n\n";
	}
};