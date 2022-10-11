// Lab03: Basic Input and Loop Practice. 

#include <iostream>

int main()
{
	int listnumber;
	std::cout << "Enter a number" << std::endl; 
	std::cout << "List number from 1 to ";
	std::cin >> listnumber;
	for(int i = 1; i <= listnumber; i++) {
		std::cout << i << std::endl;
	}
	return 0;
}