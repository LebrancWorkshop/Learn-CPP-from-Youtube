// Pass by Value vs Pass by Reference. 
#include <iostream>

int increase_by_value(int input_value, int increase_rate)
{
	input_value = input_value + increase_rate;
	return input_value;
}

int increase_by_reference(int *input_reference, int increase_rate)
{
	*input_reference = *input_reference + increase_rate;
	return *input_reference;
}

int main()
{
	int num1 = 20;

	std::cout << increase_by_value(num1, 1) << std::endl; // Output: 21
	std::cout << increase_by_reference(&num1, 1) << std::endl; // Output: 21

	std::cout << "--------" << std::endl;

	std::cout << num1 << std::endl; // num1 changed to be the input of increase_by_reference function. // Output: 21 

	return 0;
}
