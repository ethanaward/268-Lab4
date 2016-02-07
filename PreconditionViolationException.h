#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error{

public:
/**
	*  @pre None
	*  @post Creates a PreconditionViolationException, and passes the message taken in to the std::runtime_error constructor
	*  @return None
	*/
	PreconditionViolationException(const char* message);
};

#endif
