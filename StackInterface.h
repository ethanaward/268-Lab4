/**
*	@file : Nodet.h
*	@author : Ethan Ward
*	@date : 2015.03.05
*	@brief: A pure virtual interface to allow the creation of a Stack class. Cannot do anything on its own.
*/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H

#include "PreconditionViolationException.h"

template <typename T>
class StackInterface {
public:
/**
	*  @pre None
	*  @post None
	*  @return None
	*/
	virtual ~StackInterface() {};
/**
	*  @pre None
	*  @post None
	*  @return Returns true if the stack is empty, false if not.
	*/
	virtual bool isEmpty() const = 0;
/**
	*  @pre None
	*  @post Pushes a new node with the value newEntry on the top of the stack.
	*  @return None
	*/
	virtual void push(const T newEntry) = 0;
/**
	*  @pre The stack is not empty.
	*  @post Pops the top of the stack if possible, throwing an exception if the stack is empty.
	*  @return The value of the popped node if possible, nothing if the stack is empty.
	*/
	virtual T pop() throw(PreconditionViolationException) = 0;
/**
	*  @pre The stack is not empty.
	*  @post Throws an exception if the stack is empty.
	*  @return The value of the top node if possible, nothing if the stack is empty.
	*/
	virtual T peek() const throw(PreconditionViolationException) = 0;
/**
	*  @pre None
	*  @post None
	*  @return Returns the size of the stack.
	*/
	virtual int size() const = 0;
/**
	*  @pre None
	*  @post Prints the value of all the nodes in the stack if possible, Stack Empty if empty.
	*  @return None
	*/
	virtual void print() const = 0;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is less than the rhs's size. False if not.
	*/
	virtual bool operator<(const StackInterface<T>& rhs) const = 0;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is less than or equal to the rhs's size. False if not.
	*/
	virtual bool operator<=(const StackInterface<T>& rhs) const = 0;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is greater than the rhs's size. False if not.
	*/
	virtual bool operator>(const StackInterface<T>& rhs) const = 0;
/**
	*  @pre None
	*  @post None
	*  @return True if this stack's size is greater than or equal to the rhs's size. False if not.
	*/
	virtual bool operator>=(const StackInterface<T>& rhs) const = 0;
/**
	*  @pre None
	*  @post Prints the stack.
	*  @return True if this stack's size is equal to the rhs's size. False if not.
	*/
	virtual bool operator==(const StackInterface<T>& rhs) const = 0;
/**
	*  @pre None
	*  @post Prints the stack.
	*  @return True if this stack's size is not equal to the rhs's size. False if not.
	*/
	virtual bool operator!=(const StackInterface<T>& rhs) const = 0;
};

#endif
