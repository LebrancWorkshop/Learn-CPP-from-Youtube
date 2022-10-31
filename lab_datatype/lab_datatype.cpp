#include <iostream>

int main()
{
	std::cout << "Size of Integer: " << sizeof(int) << std::endl; // Size of int: 4 bytes (32 bits). 
	std::cout << "Size of Character: " << sizeof(char) << std::endl; // Size of char: 1 byte (8 bits).
	std::cout << "Size of Float: " << sizeof(float) << std::endl; // Size of float: 4 bytes (32 bits). 
	std::cout << "Size of Long: " << sizeof(long) << std::endl; // Size of long: 8 bytes (64 bits). 
	std::cout << "Size of Boolean: " << sizeof(bool) << std::endl; // Size of bool: 1 byte (8 bits). 
	std::cout << "Size of String: " << sizeof(std::string) << std::endl; // Size of standard string: 24 bytes (192 bits). 
	return 0;
}