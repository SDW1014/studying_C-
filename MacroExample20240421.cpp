#include "MacroExample20240421.h"

MacroExample20240421::MacroExample20240421()
{
	usingEverthing();
}

MacroExample20240421::~MacroExample20240421()
{
}

void MacroExample20240421::defineExampleFirst()
{
	std::cout << "Area of circle with radius 5:" << CIRCLE_AREA(5) << std::endl;
}

void MacroExample20240421::defineExampleSecond()
{
	int x = 5; 
	int y = 10;

	std::cout << "The maximum of " << x << " and " << y << " is " << MAX(x, y) << std::endl;
}

void MacroExample20240421::defineExampleThird()
{
	std::cout << MESSAGE << std::endl;
}

void MacroExample20240421::usingEverthing()
{
	defineExampleFirst();
	defineExampleSecond();
	defineExampleThird();
}
