#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
	// 생성자 구현
	myVariable = 0;
}

MyClass::~MyClass()
{
	// 소멸자 구현
}

void MyClass::MyMethod()
{
	// 메서드 구현
	cout << "MyMethod 호출됨" << endl;
}
