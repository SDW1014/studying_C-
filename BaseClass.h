#pragma once
#include <iostream>

class BaseClass
{
public:
	virtual ~BaseClass();

	void operator delete (void* ptr);

	void operator delete[](void* ptr);
};

