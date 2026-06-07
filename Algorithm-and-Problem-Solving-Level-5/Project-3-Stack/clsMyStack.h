#pragma once

#include <iostream>
#include "clsMyQueue.h"

using namespace std;

template <class T>
class clsMyStack : public clsMyQueue <T>
{
public:

	void Push(T Item)
	{
		this->_MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return this->front();
	}

	T Bottom()
	{
		return this->back();
	}

	void Print()
	{
		if (this->Size() == 0)
		{
			cout << "\nThe Stack List Is Empty.\n";
			return;
		}

		cout << "Top --> ";
		for (int i = 0; i < this->Size(); i++)
		{
			cout << this->_MyList.GetItem(i) << " --> ";
		}
		cout << "Bottom\n";
	}
};
