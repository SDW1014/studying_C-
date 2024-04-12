#include <iostream>
#include "ControFlowExamples.h"
using namespace std;
int main() 
{   
    ControFlowExamples example;
    int choice;

    cout << "Control Flow Examples Program" << endl;
    cout << "1. If/Else Example" << endl;
    cout << "2. Switch Case Example" << endl;
    cout << "3. For Loop Example" << endl;
    cout << "4. While Loop Example" << endl;
    cout << "5. Do-While Loop Example" << endl;
    cout << "Enter your choise (1-5) : " << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        example.ifElseExample();
        break;
    case 2:
        example.switchCaseExample();
        break;
    case 3:
        example.forLoopExample();
        break;
    case 4:
        example.whileLoopExample();
        break;
    case 5:
        example.doWhileLoopExample();
        break;
    default:
        cout << "Invalid choise. Please enter a number between 1 and 5 " << endl;
    }
    return 0;
}
