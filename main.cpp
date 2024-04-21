#include <iostream>
#include <vector>
#include "Animal20240421.h"
#include "Dog20240421.h"
#include "Cat20240421.h"

using namespace std;


int main()
{
	vector<Animal20240421*> vAnimal;

	vAnimal.push_back(new Animal20240421());
	vAnimal.push_back(new Dog20240421());
	vAnimal.push_back(new Cat20240421());

	for (auto& animal : vAnimal)
	{
		animal->speak();
	}

	for (auto& animal : vAnimal)
	{
		delete animal;
	}

	vAnimal.clear();

	return 0;
}