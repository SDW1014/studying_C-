#ifndef ANIMAL_20240421_H
#define ANIMAL_20240421_H
#include <iostream>

using namespace std;

class Animal20240421
{
public:
	virtual void speak();
};


#endif // !ANIMAL_20240421_H


//1번 이전 연습
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "동물이 소리를 냅니다." << endl;
//	}
//};
//class Dog :public Animal {
//public:
//	void speak() override
//	{
//		cout << "개가 짖습니다." << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "고양이가 야옹 합니다." << endl;
//	}
//};
//
//int main()
//{
//	vector<Animal*> vAnimal;
//
//	vAnimal.push_back(new Animal());
//	vAnimal.push_back(new Dog());
//	vAnimal.push_back(new Cat());
//
//	for (auto& animal : vAnimal)
//	{
//		animal->speak();
//	}
//
//	for (auto& animal : vAnimal)
//	{
//		delete animal;
//	}
//
//	vAnimal.clear();
//
//	return 0;
//}

//2번
//#include <iostream>
//#include <vector>
//#include "Animal20240421.h"
//#include "Dog20240421.h"
//#include "Cat20240421.h"
//
//using namespace std;
//
//
//int main()
//{
//	vector<Animal20240421*> vAnimal;
//
//	vAnimal.push_back(new Animal20240421());
//	vAnimal.push_back(new Dog20240421());
//	vAnimal.push_back(new Cat20240421());
//
//	for (auto& animal : vAnimal)
//	{
//		animal->speak();
//	}
//
//	for (auto& animal : vAnimal)
//	{
//		delete animal;
//	}
//
//	vAnimal.clear();
//
//	return 0;
//}