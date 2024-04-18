#include "GradeManager.h"
#include <iostream>
#include <algorithm>

void GradeManager::addStudent(const std::string& name, int score) {
    students.push_back({ name, score });
}

void GradeManager::displayScores() const {
    for (const auto& student : students) {
        std::cout << student.name << ": " << student.score << std::endl;
    }
}

void GradeManager::displayStatistics() const {
    /*if (students.empty()) {
        std::cout << "No students in system." << std::endl;
        return;
    }

    int maxScore = std::max_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) { return a.score < b.score; })->score;
    int minScore = std::min_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) { return a.score < b.score; })->score;
    double averageScore = std::accumulate(students.begin(), students.end(), 0.0,
        [](double sum, const Student& s) { return sum + s.score; }) / students.size();

    std::cout << "Maximum Score: " << maxScore << std::endl;
    std::cout << "Minimum Score: " << minScore << std::endl;
    std::cout << "Average Score: " << averageScore << std::endl;*/
}