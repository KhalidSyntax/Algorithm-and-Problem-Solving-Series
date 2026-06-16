#pragma once

#include <queue>
#include <stack>
#include <string>
#include "clsTicket.h";

using namespace std;

class clsQueueLine
{
private:
	queue <clsTicket> _QueueLine;
	string _Prefix = "";
	short _AverageServeTime = 0;
	short _TotalTickets = 0;

public:

	clsQueueLine(string prefix, short averageServeTime)
	{
		_Prefix = prefix;
		_AverageServeTime = averageServeTime;
		_TotalTickets = 0;
	}

	void IssueTicket()
	{
		_TotalTickets++;
		clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageServeTime);
		_QueueLine.push(Ticket);
	}

	short WaitingClients()
	{
		return _QueueLine.size();
	}

	string WhoIsNext()
	{
		if (_QueueLine.empty())
			return "No Client Left.";

		return _QueueLine.front().FullNumber();
	}

	bool ServeNextClient()
	{
		if (_QueueLine.empty())
			return false;

		_QueueLine.pop();
		return true;
	}

	short ServedClients()
	{
		return _TotalTickets - WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";
	}

	void PrintTicketsLineLTR()
	{
		if (_QueueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets.";
			return;
		}

		cout << "\n\t\tTickets: ";

		queue <clsTicket> TempQueue = _QueueLine;
		stack <clsTicket> TempStack;

		while (!TempQueue.empty())
		{
			TempStack.push(TempQueue.front());
			TempQueue.pop();
		}

		while (!TempStack.empty())
		{
			cout << " " << TempStack.top().FullNumber() << " --> ";
			TempStack.pop();
		}
		cout << endl;
	}

	void PrintTicketsLineRTL()
	{
		if (_QueueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets.";
			return;
		}

		cout << "\n\t\tTickets: ";
		queue <clsTicket> TempQueue = _QueueLine;
		
		while (!TempQueue.empty())
		{
			cout << " " << TempQueue.front().FullNumber() << " <-- ";
			TempQueue.pop();
		}
		cout << endl;
	}

	void PrintAllTickets()
	{
		if (_QueueLine.empty())
		{
			cout << "\n\n\t\t\t     ---No Tickets---\n";
			return;
		}

		cout << "\n\n\t\t\t       ---Tickets---";
		queue <clsTicket> TempQueue = _QueueLine;

		while (!TempQueue.empty())
		{
			TempQueue.front().Print();
			TempQueue.pop();
		}
		cout << endl;
	}
};