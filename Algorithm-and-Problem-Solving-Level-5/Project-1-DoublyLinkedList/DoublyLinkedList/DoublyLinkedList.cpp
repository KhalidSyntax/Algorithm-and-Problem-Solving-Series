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

    cout << "\n Linked List Content:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(20);

    if (N1 != NULL)
        cout << "\n Node with value 20 is found :-)\n";
    else
        cout << "\n Node is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 50);
    cout << "\n After Inserting 50 after 20:\n";
    MydblLinkedList.PrintList();

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    MydblLinkedList.InsertAtEnd(70);
    cout << "\n After Inserting 70 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(40);
    MydblLinkedList.DeleteNode(N2);

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    cout << "\n After Deleting 40:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\n After Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    cout << "\n After Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

    cout << "\nDetails:\n";
    MydblLinkedList.PrintListDetails();

    system("pause>0");
    return 0;
}