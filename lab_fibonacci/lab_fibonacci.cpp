#include <iostream>

// Fibonacci Sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

int memory_array[1000];

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

// Using Memorization Technique to do Fibonacci Sequence Function. 
int fibo_memory(int index)
{
	if(index == 0 || index == 1)
	{
		return memory_array[index] = 1;
	}
	else
	{
		if(memory_array[index - 2] == 0) // Integer Array has zero (0) as a null value by default. 
		{
			memory_array[index - 2] = fibo_memory(index - 2);
		}
		if(memory_array[index - 1] == 0) // Integer Array has zero (0) as a null value by default. 
		{
			memory_array[index - 1] = fibo_memory(index - 1);
		}
		return memory_array[index - 2] + memory_array[index - 1];
	}
}

int main()
{
	std::cout << fibo_memory(10) << std::endl; // Expected Output: 89;
	std::cout << fibonacci(3) << std::endl; // Expected Output: 3;
	return 0;
}