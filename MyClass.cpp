#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
	// ������ ����
	myVariable = 0;
}

MyClass::~MyClass()
{
	// �Ҹ��� ����
}

void MyClass::MyMethod()
{
	// �޼��� ����
	cout << "MyMethod ȣ���" << endl;
}
