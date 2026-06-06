#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List Is Empty.\n";
    else
        cout << "\n\nNo List Is Not Empty.\n";

    MydblLinkedList.InsertAtBeginning(50);
    MydblLinkedList.InsertAtBeginning(40);
    MydblLinkedList.InsertAtBeginning(30);
    MydblLinkedList.InsertAtBeginning(20);
    MydblLinkedList.InsertAtBeginning(10);

    cout << "\n Linked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List Is Empty.\n";
    else
        cout << "\n\nNo List Is Not Empty.\n";

    system("pause>0");
    return 0;
}