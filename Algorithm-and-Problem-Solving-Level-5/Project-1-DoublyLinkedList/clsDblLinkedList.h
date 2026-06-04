#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
public:
    class Node
    {
    public:
        T Data;
        Node* Next;
        Node* Prev;
    };

private:
    Node* Head = NULL;

protected:
    int _Size = 0;

public:

    Node* Find(T Value)
    {
        Node* Current = Head;

        while (Current != NULL)
        {
            if (Current->Data == Value)
            {
                return Current;
            }
            Current = Current->Next;
        }
        return NULL;
    }

    void InsertAtBeginning(T Value)
    {
        Node* NewNode = new Node();

        NewNode->Prev = NULL;
        NewNode->Data = Value;
        NewNode->Next = Head;

        if (Head != NULL)
            Head->Prev = NewNode;

        Head = NewNode;
        _Size++;
    }

    void InsertAfter(Node* Current, T Value)
    {
        if (Current == NULL)
        {
            cout << "\nThe Given Previous Node Can't Be NULL" << endl;
            return;
        }

        Node* NewNode = new Node();

        NewNode->Prev = Current;
        NewNode->Data = Value;
        NewNode->Next = Current->Next;

        if (Current->Next != NULL)
            Current->Next->Prev = NewNode;

        Current->Next = NewNode;
        _Size++;
    }

    void InsertAtEnd(T Value)
    {
        Node* NewNode = new Node();
        NewNode->Data = Value;
        NewNode->Next = NULL;

        if (Head == NULL)
        {
            NewNode->Prev = NULL;
            Head = NewNode;
        }
        else
        {
            Node* Current = Head;
            while (Current->Next != NULL)
            {
                Current = Current->Next;
            }
            NewNode->Prev = Current;
            Current->Next = NewNode;
        }
        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete)
    {
        if (Head == NULL || NodeToDelete == NULL)
        {
            cout << "The List Is Empty." << endl;
            return;
        }

        if (Head == NodeToDelete)
            Head = NodeToDelete->Next;

        if (NodeToDelete->Next != NULL)
            NodeToDelete->Next->Prev = NodeToDelete->Prev;

        if (NodeToDelete->Prev != NULL)
            NodeToDelete->Prev->Next = NodeToDelete->Next;

        delete NodeToDelete;
        NodeToDelete = NULL;
        _Size--;
    }

    void DeleteFirstNode()
    {
        if (Head == NULL)
        {
            cout << "The List Is Empty." << endl;
            return;
        }

        Node* FirstNode = Head;
        Head = Head->Next;

        if (Head != NULL)
            Head->Prev = NULL;

        delete FirstNode;
        _Size--;
    }

    void DeleteLastNode()
    {
        if (Head == NULL)
        {
            cout << "The List Is Empty." << endl;
            return;
        }

        if (Head->Next == NULL)
        {
            delete Head;
            Head = NULL;
            _Size--;
            return;
        }

        Node* Current = Head;
        while (Current->Next->Next != NULL)
        {
            Current = Current->Next;
        }

        Node* Temp = Current->Next;
        Current->Next = NULL;
        delete Temp;
        Temp = NULL;
        _Size--;
    }

    void PrintNodeDetails(Node* Node)
    {
        if (Node == NULL)
            return;

        if (Node->Prev != NULL)
            cout << Node->Prev->Data;
        else
            cout << "NULL";

        cout << " <--> " << Node->Data << " <--> ";

        if (Node->Next != NULL)
            cout << Node->Next->Data << endl;
        else
            cout << "NULL" << endl;
    }

    void PrintListDetails()
    {
        Node* Current = Head;
        cout << "\n";
        while (Current != NULL)
        {
            PrintNodeDetails(Current);
            Current = Current->Next;
        }
    }

    void PrintList()
    {
        if (Head == NULL)
        {
            cout << "The List Is Empty." << endl;
            return;
        }

        cout << " NULL <--> ";

        Node* Current = Head;
        while (Current != NULL)
        {
            cout << Current->Data << " <--> ";
            Current = Current->Next;
        }
        cout << " NULL" << endl;
    }

    int Size()
    {
        return _Size;
    }
};