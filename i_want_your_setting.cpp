#include "i_want_your_setting.h"
#include <iostream>
using namespace std;

i_want_your_setting::i_want_your_setting()
{
	cout << "나이를 입력하세요 : ";
	cin >> age;

	cout << "키를 입력하세요(m) : ";
	cin >> height;
}

i_want_your_setting::~i_want_your_setting()
{
}

void i_want_your_setting::printMyInformation()
{
	cout << "당신의 나이는 " << age << "살이고, 키는 " << height << "미터 입니다.";
}
