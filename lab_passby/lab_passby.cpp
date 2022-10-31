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
	int num2 = 70;

	std::cout << increase_by_value(num1, 1) << std::endl;
	std::cout << increase_by_reference(&num1, 1) << std::endl;

	std::cout << "--------" << std::endl;

	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;

	return 0;
}
