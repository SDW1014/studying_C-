#include "UserDetails.h"
#include <iostream>
#include <iomanip>

UserDetails::UserDetails(std::string name, int age)
    : name(std::move(name)), age(age), currentDate(std::chrono::system_clock::now()) {}

UserDetails::~UserDetails() {}

void UserDetails::printDetails() const {
    auto currentTime = std::chrono::system_clock::to_time_t(currentDate);
    std::tm tmSnapshot;

#if defined(_WIN32) || defined(_WIN64)
    localtime_s(&tmSnapshot, &currentTime); // Windows �÷���
#else
    localtime_r(&currentTime, &tmSnapshot); // POSIX �÷���
#endif

    std::cout << "�̸� : " << name << std::endl;
    std::cout << "���� : " << age << std::endl;
    std::cout << "���� ��¥: " << std::put_time(&tmSnapshot, "%Y-%m-%d") << std::endl;
}
