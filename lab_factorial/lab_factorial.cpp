#include <iostream>

int fact_loop(int input)
{
	int result = 1;

	if(input == 0)
	{
		return result;
	}

	for(int i = 1; i <= input; i++)
	{
		result *= i;
	}

	return result;
}

int fact_recursive(int input)
{
	int result = 1;

	if(input == 0 || input == 1)
	{
		return result;
	}

	result = input * fact_recursive(input - 1);
	return result;
}

int main()
{
	int num_a = 5; // Expected Output: 120

	std::cout << fact_loop(num_a) << std::endl;
	std::cout << fact_recursive(num_a) << std::endl;

	return 0;
}