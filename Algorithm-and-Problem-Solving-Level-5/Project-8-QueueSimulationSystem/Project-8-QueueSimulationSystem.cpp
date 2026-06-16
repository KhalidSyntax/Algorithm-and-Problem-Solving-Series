#include <iostream>
#include "clsQueueLine.h";

using namespace std;

int main()
{
    clsQueueLine PayBillsQueue("A0", 10);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bill Queue Info: \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    cout << "\n\nTickets: ";
    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bill Queue Info After Serveing One Client: \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bill Queue Info After Serveing Second Client: \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bill Queue Info After Serveing Third Client: \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bill Queue Info After Serveing Last Client: \n";
    PayBillsQueue.PrintInfo();

    cin.get();
    system("pause");
    return 0;
}