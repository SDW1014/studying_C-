#include "UserInfo.h"
#include <iostream>
using namespace std;

UserInfo::UserInfo()
{

	cout << "�̸��� �Է��ϼ��� : ";
	getline(cin, insideItem.name);

	cout << "���̸� �Է��ϼ��� : ";
	cin >> insideItem.age;

	cout << "Ű�� �Է��ϼ���(cm) : ";
	cin >> insideItem.height;
}

UserInfo::~UserInfo()
{
}

void UserInfo::printUserInfo()
{
	cout << "\n=== ����� ���� ===\n";
	cout << "�̸� : " << insideItem.name << "\n���� : " << insideItem.age << "\nŰ : " << insideItem.height;
}
