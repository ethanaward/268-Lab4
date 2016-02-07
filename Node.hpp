/**
*	@file : Node.hpp
*	@author : Ethan Ward
*	@date : 2015.03.05
*	@brief: Implements the functionality of Node.h.
*/
template <typename T>
Node<T>::Node() {

m_next = nullptr;
m_value = T();

}

template <typename T>
T Node<T>::getValue() {

return(m_value);

}

template <typename T>
void Node<T>::setValue(T value) {

m_value = value;

}

template <typename T>
Node<T>* Node<T>::getNext() {

return(m_next);

}

template <typename T>
void Node<T>::setNext(Node<T>* next) {

m_next = next;

}

