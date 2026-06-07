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

    cout << "\nItem (2): " << MyStack.GetItem(2) << endl;;

    system("pause>0");
    return 0;
}

