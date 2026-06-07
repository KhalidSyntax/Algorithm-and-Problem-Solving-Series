#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main()
{
    clsMyStack <int> MyStack;

    MyStack.Push(10);
    MyStack.Push(20);
    MyStack.Push(30);
    MyStack.Push(40);
    MyStack.Push(50);
    
    cout << "\nStack List:\n";
    MyStack.Print();

    cout << "\nStack Size  : " << MyStack.Size() << endl;
    cout << "\nStack Top   : " << MyStack.Top() << endl;
    cout << "\nStack Bottom: " << MyStack.Bottom() << endl;

    MyStack.Pop();
    cout << "\nStack List After Pop:\n";
    MyStack.Print();

    system("pause>0");
    return 0;
}

