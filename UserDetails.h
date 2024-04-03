#pragma once

#include <string>
#include <chrono>

class UserDetails {
private:
    std::string name;
    int age;
    std::chrono::system_clock::time_point currentDate;

public:
    UserDetails(std::string name, int age);
    ~UserDetails();

    void printDetails() const;
};
