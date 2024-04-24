#include "BaseClass.h"

BaseClass::~BaseClass()
{
}

void BaseClass::operator delete(void* ptr)
{
	std::cout << "BaseClass의 메모리가 삭제되었습니다." << std::endl;
	::operator delete(ptr);
}

void BaseClass::operator delete[](void* ptr)
{
	std::cout << "BaseClass 배열의 메모리가 삭제되었습니다." << std::endl;
	::operator delete[](ptr);
}
