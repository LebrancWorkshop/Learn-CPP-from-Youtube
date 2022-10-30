#include <iostream>

// Fibonacci Sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

int fibonacci(int index)
{
	if(index == 0 || index == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(index - 2) + fibonacci(index - 1);
	}
}

int main()
{
	std::cout << fibonacci(3) << std::endl; // Expected Output: 3;
	return 0;
}