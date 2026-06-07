#include <iostream>
#include "clsMyQueue.h";

using namespace std;

int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.Push(10);
    MyQueue.Push(20);
    MyQueue.Push(30);
    MyQueue.Push(40);
    MyQueue.Push(50);

    cout << "\nQueue List:\n";
    MyQueue.Print();

    MyQueue.InsertAfter(4, 99);

    cout << "\nQueue List After Inserting 99 After Item (4):\n";
    MyQueue.Print();

    system("pause>0");
    return 0;
}