#pragma once

#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
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