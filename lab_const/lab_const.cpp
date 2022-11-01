#include <iostream>

int main()
{
	const int MASTER_LEVEL = 100;

	int* pointer_int = new int; // Assign heap memory to pointer_int.
	int* pointer_int_will_error = new int; // Assign heap memory to pointer_int.
	*pointer_int = 10;
	*pointer_int_will_error = 20;

	pointer_int = (int*)&MASTER_LEVEL; // You should cast the integer pointer type to the address of constant variable. 
	//pointer_int_will_error = &MASTER_LEVEL; // Output:ERROR // Can't assign address of constant variable to pointer variable (not-point mode).  

	*pointer_int = 200;

	std::cout << *pointer_int << std::endl; // Output: 200 
	std::cout << MASTER_LEVEL << std::endl; // Output: 100 

	return 0;
}