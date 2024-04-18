// ���ø� Ŭ������ ��� �Լ� ���Ǹ� ���⿡ �ۼ��մϴ�.

#include "Stack20240418.h"

template<typename T>
Stack20240418<T>::Stack20240418() { }

template<typename T>
Stack20240418<T>::~Stack20240418() { }

template<typename T>
void Stack20240418<T>::push(const T& element) {
    elements.push_back(element);
}

template<typename T>
T Stack20240418<T>::pop() {
    if (elements.empty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    T elem = elements.back();
    elements.pop_back();
    return elem;
}

template<typename T>
T Stack20240418<T>::top() {
    if (elements.empty()) {
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template<typename T>
bool Stack20240418<T>::isEmpty() const {
    return elements.empty();
}

// ����� �ν��Ͻ�ȭ
template class Stack20240418<int>;
template class Stack20240418<double>;
