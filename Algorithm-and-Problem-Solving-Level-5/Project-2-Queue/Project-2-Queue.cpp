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

    cout << "\nQueue Size : " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back : " << MyQueue.back();

    MyQueue.Pop();
    cout << "\n\nQueue After Pop:\n";

    cout << "\nQueue List:\n";
    MyQueue.Print();

    system("pause>0");
    return 0;
}