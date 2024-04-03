#include "UserInfo.h"
#include <iostream>
using namespace std;

UserInfo::UserInfo()
{

	cout << "이름을 입력하세요 : ";
	getline(cin, insideItem.name);

	cout << "나이를 입력하세요 : ";
	cin >> insideItem.age;

	cout << "키를 입력하세요(cm) : ";
	cin >> insideItem.height;
}

UserInfo::~UserInfo()
{
}

void UserInfo::printUserInfo()
{
	cout << "\n=== 사용자 정보 ===\n";
	cout << "이름 : " << insideItem.name << "\n나이 : " << insideItem.age << "\n키 : " << insideItem.height;
}
