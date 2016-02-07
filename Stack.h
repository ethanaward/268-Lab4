/**
*	@file : Stack.h
*	@author : Ethan Ward
*	@date : 2015.03.05
*	@brief: Inherits from StackInterface. Creates Stacks, pushes to them and pops them, and overloads operators to compare the sizes of the two.
*/
#ifndef STACK_H
#define STACK_H

#include "StackInterface.h"
#include "Node.h" 
#include "PreconditionViolationException.h"

template <typename T>
class Stack: public StackInterface<T> {

public:
/**
	*  @pre None
	*  @post Initializes a Stack instance of the templated type T with m_front set to nullptr and the size set to 0.
	*  @return None
	*/
	Stack();
/**
	*  @pre A stack exists.
	*  @post Deletes all nodes in the stack to prevent memory leaks.
	*  @return None
	*/
	~Stack();
/**
	*  @pre None
	*  @post None
	*  @return Returns true if the stack is empty, false if it isn't.
	*/
	bool isEmpty() const;
/**
	*  @pre None
	*  @post Creates a new node with the value newEntry and adds it to the top of the stack.
	*  @return None
	*/
	void push(const T newEntry);
/**
	*  @pre None
	*  @post Pops the top node on the stack if possible, and throws an exception if the stack is empty.
	*  @return The value of the popped node if possible, nothing if not.
	*/
	T pop() throw(PreconditionViolationException);
/**
	*  @pre None
	*  @post Throws an exception if the stack is empty.
	*  @return The top value of the stack if possible, nothing if the stack is empty.
	*/
	T peek() const throw(PreconditionViolationException);
/**
	*  @pre None
	*  @post None
	*  @return The size of the stack.
	*/
	int size() const;
/**
	*  @pre None
	*  @post Prints the value of all the nodes in the stack if possible, Stack Empty if empty.
	*  @return None
	*/
	void print() const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is less than the rhs's size. False if not. 
	*/
	bool operator<(const StackInterface<T>& rhs) const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is less than or equal to the rhs's size. False if not. 
	*/
	bool operator<=(const StackInterface<T>& rhs) const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is greater than the rhs's size. False if not. 
	*/
	bool operator>(const StackInterface<T>& rhs) const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is greater than or equal to the rhs's size. False if not. 
	*/
	bool operator>=(const StackInterface<T>& rhs) const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is equal to the rhs's size. False if not. 
	*/
	bool operator==(const StackInterface<T>& rhs) const;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is not equal to the rhs's size. False if not. 
	*/
	bool operator!=(const StackInterface<T>& rhs) const;
private:
	Node<T>* m_front;
	int m_size;
};

#include "Stack.hpp"

#endif
