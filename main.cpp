/**
*	@file : main.cpp
*	@author : Ethan Ward
*	@date : 2015.03.05
*	@brief: Creates 2 stacks, then prints menus for the user to interact with the stacks until the user no longer wants to. Includes comparison of the stacks, pushing and popping the stack, and printing all the values on the stack.
*/
#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>

#include "StackInterface.h"
#include "Stack.h"
#include "Node.h"

void printMenu() {

std::cout << "\n\nSelect an action\n" 
	<< "1) Add something to stack 1\n"  
	<< "2) Add something to stack 2\n"  
	<< "3) See what is at the top of stack 1\n"  
	<< "4) See what is at the top of stack 2\n"  
	<< "5) Print contents of stack 1\n"  
	<< "6) Print contents of stack 2\n"   
	<< "7) Remove something from stack 1\n"  
	<< "8) Remove something from stack 2\n"  
	<< "9) Compare Stacks\n"  
	<< "10) Quit\n"  
	<< "Enter choice: ";

}

template <typename T>
void compareStacks(const StackInterface<T>& s1, const StackInterface<T>& s2)
{
	std::cout 	<< "\nComparison of stacks:\n"
			<< "lane 1 < lane 2: " <<  (s1 <  s2) 	<< "\n"
			<< "lane 1 > lane 2: " <<  (s1 >  s2) 	<< "\n"
			<< "lane 1 >= lane 2: " << (s1 >= s2) 	<< "\n"
			<< "lane 1 <= lane 2: " << (s1 <= s2) 	<< "\n"
			<< "lane 1 == lane 2: " << (s1 == s2) 	<< "\n"
			<< "lane 1 != lane 2: " << (s1 != s2) 	<< "\n";
}

int main() {

StackInterface<std::string>* lane1 = new Stack<std::string>();
StackInterface<std::string>* lane2 = new Stack<std::string>();
int choice = 0;
std::string value;

while(choice != 10) {
	printMenu();
	std::cin >> choice;
	std::cout << "You chose: " << choice << std::endl;
	
	if(choice == 1) {
		std::cout << "What is going in stack 1?:";
		std::cin >> value;
		lane1->push(value);
		std::cout << value << " successfully added to stack 1" << std::endl;
	}

	else if(choice == 2) {
		std::cout << "What is going in stack 2?:";
		std::cin >> value;
		lane2->push(value);
		std::cout << value << " successfully added to stack 2" << std::endl;
	}


	else if(choice == 3) {

		try {
			std::cout << lane1->peek() << " is at the top of stack 1" << std::endl;
		}
	
		catch(std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	else if(choice == 4) {

		try {
			std::cout << lane2->peek() << " is at the top of stack 2" << std::endl;
		}
	
		catch(std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	else if(choice == 5) {
		lane1->print();
	}

	else if(choice == 6) {
		lane2->print();
	}
	
	else if(choice == 7) {

		try {
			std::cout << lane1->pop() << " removed from stack 1" << std::endl;
		}

		catch(std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	else if(choice == 8) {

		try {
			std::cout << lane2->pop() << " removed from stack 2" << std::endl;
		}

		catch(std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	else if(choice == 9) {
		compareStacks(*(lane1),*(lane2));
	}

	else if(choice == 10) {
		std::cout << "Program ending" << std::endl;
	}

	else {
		std::cout << "Invalid choice" << std::endl;
	}

}


delete lane1;
delete lane2;
};

#endif
