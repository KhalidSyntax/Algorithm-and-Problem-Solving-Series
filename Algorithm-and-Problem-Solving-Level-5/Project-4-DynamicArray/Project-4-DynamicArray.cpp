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

    int Index = MyDynamicArray.Find(30);
    if (Index != -1)
        cout << "\n30 Is Found At Index: " << Index << endl;
    else
        cout << "\nItem Was Not Found! " << Index << endl;

    system("pause");
    return 0;
}