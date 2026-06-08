#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
private:
	int _Size = 0;
	T* _OriginalArray;
	T* _TempArray;

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

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}

		_Size = NewSize;
		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
	}

	T GetItem(int Index)
	{
		return _OriginalArray[Index];
	}

	void PrintList()
	{
		if (_Size == 0)
		{
			cout << "The Array Items Is Empty. " << endl;
			return;
		}

		for (int i = 0; i < _Size; i++)
		{
			cout << _OriginalArray[i] << " ";
		}
		cout << "\n\n";
	}
};