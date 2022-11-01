// Storage Class in C++
// Link: https://www.tutorialspoint.com/cplusplus/cpp_storage_classes.htm 

// Storage Class define the scope and the life-time of the variable / function.  
// Keyword: auto, static, register, extern, mutable 

#include <iostream>

extern int static_int;

int main()
{
	std::cout << static_int << std::endl; // Error: Linking not found. 
	return 0;
}