#include "MyObject.h"

template<typename T>
MyObject<T>::MyObject(T data) : data(data) {}

template<typename T>
T MyObject<T>::getData() const {
    return data;
}

template<typename T>
void MyObject<T>::setData(T data) {
    this->data = data;
}

// �߰����� Ŭ���� ��� �Լ��� ������ �ִٸ� �� ���Ͽ� �ۼ��մϴ�.
