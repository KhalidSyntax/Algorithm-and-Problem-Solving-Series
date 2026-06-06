#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(50);
    MydblLinkedList.InsertAtBeginning(40);
    MydblLinkedList.InsertAtBeginning(30);
    MydblLinkedList.InsertAtBeginning(20);
    MydblLinkedList.InsertAtBeginning(10);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    cout << "\nExecuting .Clear()";
    MydblLinkedList.Clear();

    cout << "\n\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    system("pause>0");
    return 0;
}