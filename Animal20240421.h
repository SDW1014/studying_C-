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


//1�� ���� ����
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "������ �Ҹ��� ���ϴ�." << endl;
//	}
//};
//class Dog :public Animal {
//public:
//	void speak() override
//	{
//		cout << "���� ¢���ϴ�." << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "����̰� �߿� �մϴ�." << endl;
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

//2��
//#include <iostream>
//#include <vector>
//#include "Animal20240421.h"
//#include "Dog20240421.h"
//#include "Cat20240421.h"
//
//using namespace std;
//
//
//// ������ 
//// ����� ������ �ʱ�ȭ�Ѵ�.
//// ����Ѵ�. 
//// ����� �� ������ ���ش�.
//// �⺻������ �� �⺻�� ��Ű�Ⱑ �� ��ƴ�
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