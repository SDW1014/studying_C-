#include "BaseClass.h"

BaseClass::~BaseClass()
{
}

void BaseClass::operator delete(void* ptr)
{
	std::cout << "BaseClass�� �޸𸮰� �����Ǿ����ϴ�." << std::endl;
	::operator delete(ptr);
}

void BaseClass::operator delete[](void* ptr)
{
	std::cout << "BaseClass �迭�� �޸𸮰� �����Ǿ����ϴ�." << std::endl;
	::operator delete[](ptr);
}
