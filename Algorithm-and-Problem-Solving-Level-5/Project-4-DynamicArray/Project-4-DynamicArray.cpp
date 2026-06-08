#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nArray Items:\n";
    MyDynamicArray.PrintList();
    cout << "Size: " << MyDynamicArray.Size() << endl;

    MyDynamicArray.InsertBefore(2, 22);
    cout << "\nArray Items After Inserting 2 Before Index 2:\n";
    MyDynamicArray.PrintList();
    cout << "Size: " << MyDynamicArray.Size() << endl;

    system("pause");
    return 0;
}