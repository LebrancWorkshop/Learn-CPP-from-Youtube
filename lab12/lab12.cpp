// Lab12: Recursion. 
#include <iostream>

int recursive_v1(int a)
{
	if(a > 0)
	{
		recursive_v1(a - 1);
		std::cout << a << ", ";
	}
	return 0;
}

int recursive_v2(int a)
{
	if(a != 0)
	{
		// Swap two below rows to see the difference. 
		std::cout << a << ", ";
		recursive_v2(a - 1);
	}
	return 0;
}

int full_recursive(int a)
{
	if(a > 0)
	{
		full_recursive(a - 1);
		std::cout << a << ", ";
	}
	else if(a < 0)
	{
		full_recursive(a + 1);
		std::cout << a << ", ";
	}
	return 0;
}

int main()
{
	std::cout << recursive_v1(10) << std::endl;
	std::cout << recursive_v1(10) << std::endl;
	std::cout << full_recursive(-10) << std::endl;
	return 0;
}