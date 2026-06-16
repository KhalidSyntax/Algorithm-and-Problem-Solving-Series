#pragma once

#include "clsDate.h";

class clsTicket
{
private:
	short _Number = 0;
	string _Prefix;
	string _TicketTime;
	short _WaitingClients = 0;
	short _AverageServeTime = 0;

public:

	clsTicket(string prefix, short number, short waitingClients, short averageServeTime)
	{
		_Number = number;
		_Prefix = prefix;
		_TicketTime = clsDate::GetSystemDateTimeString();
		_WaitingClients = waitingClients;
		_AverageServeTime = averageServeTime;
	}

	string Prefix()
	{
		return _Prefix;
	}

	short Number()
	{
		return _Number;
	}

	string FullNumber()
	{
		return _Prefix + to_string(_Number);
	}

	string TicketTime()
	{
		return _TicketTime;
	}

	short WaitingClients()
	{
		return _WaitingClients;
	}

	short ExpectedServeTime()
	{
		return _AverageServeTime * WaitingClients();
	}

	void Print()
	{
		cout << "\n\t\t\t  _______________________\n";
		cout << "\n\t\t\t\t   " << FullNumber();
		cout << "\n\t\t\t   " << TicketTime();
		cout << "\n\t\t\t   Waiting Clients = " << WaitingClients();
		cout << "\n\t\t\t   Serve Time In";
		cout << "\n\t\t\t    " << ExpectedServeTime() << " Minutes.";
		cout << "\n\t\t\t  _______________________\n";
	}
};
