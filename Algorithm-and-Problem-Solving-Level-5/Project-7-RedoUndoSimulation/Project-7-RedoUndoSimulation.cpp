#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;
    cout << "\nS1  = " << S1.Value << "\n";

    S1.Value = "Khalid";
    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Fahad";
    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Amri";
    cout << "S1  = " << S1.Value << "\n";

    // -----------------------------------------------
    cout << "\n\nUndo: ";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1  After Undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1  After Undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1  After Undo = " << S1.Value << "\n";

    // -----------------------------------------------
    cout << "\n\nRedo: ";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1  After Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1  After Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1  After Redo = " << S1.Value << "\n";

    cin.get();
    system("pause");
    return 0;
}