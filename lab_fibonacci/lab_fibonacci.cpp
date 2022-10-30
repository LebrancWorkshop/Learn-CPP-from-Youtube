#include <iostream>

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