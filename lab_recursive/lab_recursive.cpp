#include <iostream>

void recursive_v1(int input)
{
	if(input > 0)
	{
		std::cout << input << ", ";
		recursive_v1(input - 1);
	}
}

void recursive_v2(int input)
{
	if(input > 0)
	{
		recursive_v2(input - 1);
		std::cout << input << ", ";
	}
}

int main()
{
	int num_a = 5;

	recursive_v1(num_a); // Print Output before call function. 
	std::cout << std::endl; // Output: 5, 4, 3, 2, 1,

	recursive_v2(num_a); // Call function before print output. 
	std::cout << std::endl; // Output: 1, 2, 3, 4, 5, 
	return 0;
}