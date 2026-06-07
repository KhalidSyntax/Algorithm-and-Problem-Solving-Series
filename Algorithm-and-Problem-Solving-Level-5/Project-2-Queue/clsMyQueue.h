#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList <T> _MyList;

public:

	void Push(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Print()
	{
		cout << "Front --> ";
		for (int i = 0; i < _MyList.Size(); i++)
		{
			cout << _MyList.GetItem(i) << " --> ";
		}
		cout << "Rear\n";
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(_MyList.Size() - 1);
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T NewValue)
	{
		_MyList.InsertAtBeginning(NewValue);
	}

	void InsertAtBack(T NewValue)
	{
		_MyList.InsertAtEnd(NewValue);
	}
};