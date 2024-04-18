#ifndef GRADE_MANAGER_H
#define GRADE_MANAGER_H

#include <vector>
#include <string>

struct Student {
    std::string name;
    int score;
};

class GradeManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const std::string& name, int score);
    void displayScores() const;
    void displayStatistics() const;
};

#endif // GRADE_MANAGER_H


//#include "GradeManager.h"
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    GradeManager manager;
//    string name;
//    int score;
//
//    cout << "Enter student names and scores ('end' to stop):" << endl;
//    while (true) {
//        cout << "Name: ";
//        getline(cin, name);
//        if (name == "end") break;
//        cout << "Score: ";
//        cin >> score;
//        cin.ignore(); // ignore the newline after entering a number
//
//        manager.addStudent(name, score);
//    }
//
//    cout << "\nAll Students' Scores:" << endl;
//    manager.displayScores();
//
//    cout << "\nStatistics:" << endl;
//    manager.displayStatistics();
//
//    return 0;
//}
