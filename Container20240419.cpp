#include "Container20240419.h"

template<typename T>
void Container20240419<T>::add(const T& element)
{
	elements.push_back(element);
}

template<typename T>
void Container20240419<T>::print()
{
	for (auto& element : elements)
	{
		cout << element << endl;
	}
	cout << endl;
}

template class Container20240419<int>;
template class Container20240419<double>;
template class Container20240419<string>;