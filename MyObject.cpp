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

// 추가적인 클래스 멤버 함수의 구현이 있다면 이 파일에 작성합니다.
