#include "i_want_your_setting.h"
#include <iostream>
using namespace std;

i_want_your_setting::i_want_your_setting()
{
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;

	cout << "Ű�� �Է��ϼ���(m) : ";
	cin >> height;
}

i_want_your_setting::~i_want_your_setting()
{
}

void i_want_your_setting::printMyInformation()
{
	cout << "����� ���̴� " << age << "���̰�, Ű�� " << height << "���� �Դϴ�.";
}
