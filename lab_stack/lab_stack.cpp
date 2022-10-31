#include <iostream>
#include "lab_stack.h"

int main()
{
	Stack stack(10);
	stack.push(10);
	stack.push(20);
	std::cout << stack.len() << std::endl;
	stack.display();
	std::cout << stack.pop() << std::endl;
	stack.display();
	return 0;
}