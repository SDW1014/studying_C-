#ifndef MACRO_EXAMPLE_20240421_H
#define MACRO_EXAMPLE_20240421_H

//first
#define PI 3.141592
#define CIRCLE_AREA(radius) (PI*(radius)*(radius))

//second
#define MAX(a,b) (((a)>(b)) ? (a) : (b))

//third
#define MESSAGE "hello, World!"
#undef MESSAGE
#define MESSAGE "Goodbye, World!"

#include <iostream>
#include <string>

class MacroExample20240421
{
public:
	MacroExample20240421();
	~MacroExample20240421();

	void defineExampleFirst();
	void defineExampleSecond();
	void defineExampleThird();

	void usingEverthing();
};

#endif // !MACRO_EXAMPLE_20240421_H



//1¹ø 
//#include "MacroExample20240421.h"
//
//int main()
//{
//	MacroExample20240421 example;
//
//	example.defineExampleFirst();
//	example.defineExampleSecond();
//	example.defineExampleThird();
//
//	example.usingEverthing();
//
//	return 0;
//}