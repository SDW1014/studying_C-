#pragma once
#include <string>
using namespace std;
struct insideInformation
{
	string name;
	int age;
	float height;
};

class UserInfo
{
public:
	UserInfo();
	~UserInfo();

	void printUserInfo();

private:
	insideInformation insideItem;
};

