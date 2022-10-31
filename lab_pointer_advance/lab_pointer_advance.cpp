#include <iostream>

int main()
{
	int data = 20;
	int *pointer = &data;
	int *new_pointer = pointer;

	std::cout << data << std::endl; // Output: 20
	std::cout << &data << std::endl; // Output: 0x16d1faca8

	std::cout << "--------" << std::endl;

	std::cout << pointer << std::endl; // Output: 0x16d1faca8
	std::cout << *pointer << std::endl; // Output: 20 
	std::cout << &*pointer << std::endl; // Output: 0x16d1faca8 
	std::cout << &pointer << std::endl; // Output: 0x16d1faca0

	std::cout << "--------" << std::endl;

	std::cout << new_pointer << std::endl; // Output: 0x16d1faca8
	std::cout << *new_pointer << std::endl; // Output: 20 

	return 0;
}