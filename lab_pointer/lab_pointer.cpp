#include <iostream>

// * => Memory Access (Pointer) -> Use for denote the variable to be the pointer for accessing to the memory. 
// & => Memory Address (Address) -> Use for denote the variable to give an address of the variable behind. (Ex. &a means "Address of a")

/** 
 * Example
 * int a = 10; => Normal Variable Assigning. 
 * int *b = &a; => Pointer Variable that assign the address of a.
 * 
 * Error Situation 
 * int b = &a; => CANNOT do this, it will be error. (You can't assign the address of variable to normal variable)
 * int *b = a; => CANNOT do this, it will be error. (You can't assign the normal variable to the pointer variable) 
 * int *b = 10; => CANNOT do this too, it will be error. (You can't assign the normal value to pointer variable)
 * int *b = &10; => CANNOT do this too, it will be error. (You can't assign the address of value, it should be the address of variable only)
 * 
 * Scenario for understanding the concept easily.
 * The normal variable assigning is like you define the things in the room to the room label. 
 * The pointer variable assigning is like the point man who get the room's address on his own (pointer) and if he is in the pointer mode (*pointer), he can use the address to access and point to the things in the room. 
*/

int main()
{
	// data => normal variable.
	// 10 => normal value. 
	// &data => address of normal variable (aka. address of "data" variable).
	// *address => pointer that can access to get the normal value by using address of normal variable. 
	// address => pointer variable in the non-pointer mode. It'll be the address of the address of normal variable we assign. 

	int data = 10;
	int *address = &data; // If we want to assign address of variable to the left side variable, we must denote the left variable to be the pointer variable.
	
	std::cout << data << std::endl; // Give us the value of the normal variable. // Output: 10 
	std::cout << &data << std::endl; // Give us the address of the normal variable. // Output: 0x16f942cc8
	
	std::cout << address << std::endl; // Give us the non-pointer mode of pointer that store the address of the normal variable. // Output: 0x16f942cc8
	std::cout << *address << std::endl; // Access to get the value of the address of the variable. // Output: 10 
	
	// Note: If we compile and run the program again, the address will be different.

	std::cout << "--------" << std::endl;

	int temp = 20; // Create a new normal variable and assign the another normal value to it.
	address = &temp; // Assign the new address to the pointer variable. (You can do this because compiler is already known that the variable is pointer variable). 

	std::cout << address << std::endl; // Output: 0x16f942cbc
	std::cout << *address << std::endl; // Output: 20 

	std::cout << data << std::endl; // Output: 10
	std::cout << &data << std::endl; // Output: 0x16f942cc8
	return 0;
}