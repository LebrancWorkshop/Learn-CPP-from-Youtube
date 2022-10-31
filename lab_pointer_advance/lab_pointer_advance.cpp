#include <iostream>

int main()
{
	int data = 20;
	int *pointer = &data;
	int *new_pointer = pointer;
	int **pointer_to_pointer = &pointer; // ** use to denote that variable is the pointer of the pointer of variable. 

	std::cout << data << std::endl; // Output: 20
	std::cout << &data << std::endl; // Output: 0x16cf4aca8

	std::cout << "--------" << std::endl;

	std::cout << pointer << std::endl; // Output: 0x16cf4aca8
	std::cout << *pointer << std::endl; // Output: 20 
	std::cout << &*pointer << std::endl; // Output: 0x16cf4aca8
	std::cout << &pointer << std::endl; // Output: 0x16cf4aca0

	std::cout << "--------" << std::endl;

	std::cout << new_pointer << std::endl; // Output: 0x16cf4aca8
	std::cout << *new_pointer << std::endl; // Output: 20 

	std::cout << "--------" << std::endl;

	std::cout << pointer_to_pointer << std::endl; // Output: 0x16cf4aca0
	std::cout << *pointer_to_pointer << std::endl; // Output: 0x16cf4aca8 
	std::cout << **pointer_to_pointer << std::endl; // Output: 20 

	return 0;
}