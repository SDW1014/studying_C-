#include <iostream>
#include "ControlFlowExamples.h"
using namespace std;
int main() 
{   
    ControlFlowExamples example;
    int choice;

    cout << "STL Examples Program" << endl;
    cout << "1. Vector Example" << endl;
    cout << "2. Map Example" << endl;
    cout << "3. Set Example" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
    case 1:
        example.vectorExample();
        break;
    case 2:
        example.mapExample();
        break;
    case 3:
        example.setExample();
        break;
    default:
        cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
    }
    return 0;
}
