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
	int data = 10;
	int *address = &data; // If we want to assign address of variable to the left side variable, we must denote the left variable to be the pointer variable.
	std::cout << data << std::endl;
	std::cout << address << std::endl;
	std::cout << *address << std::endl;
	std::cout << &data << std::endl;
	return 0;
}