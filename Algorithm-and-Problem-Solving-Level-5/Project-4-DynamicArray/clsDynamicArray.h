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

	void Reverse()
	{
		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = _OriginalArray[(_Size-1) - i];
		}

		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index >= _Size || Index < 0)
			return false;

		int NewSize = _Size - 1;

		_TempArray = new T[NewSize];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}

		for (int i = Index + 1; i < _Size; i++)
		{
			_TempArray[i - 1] = _OriginalArray[i];
		}

		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
		_Size = NewSize;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_Size - 1);
	}

	int Find(T Value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (Value == _OriginalArray[i])
				return i;
		}
		return -1;
	}

	bool DeleteItem(T Value)
	{
		int Index = Find(Value);
		
		if (Index == -1)
			return false;
		
		DeleteItemAt(Index);
		return true;
	}

	bool InsertAt(int Index, T Value)
	{
		if (Index > _Size || Index < 0)
			return false;

		int NewSize = _Size + 1;

		_TempArray = new T[NewSize];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}

		_TempArray[Index] = Value;

		for (int i = Index; i < _Size; i++)
		{
			_TempArray[i + 1] = _OriginalArray[i];
		}

		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
		_Size = NewSize;
		return true;
	}

	void PrintList()
	{
		if (_Size == 0)
		{
			cout << "The Array Items Is Empty. " << endl;
			return;
		}

		cout << "[ ";
		for (int i = 0; i < _Size; i++)
		{
			cout << _OriginalArray[i] << " ";
		}
		cout << "]\n\n";
	}
};