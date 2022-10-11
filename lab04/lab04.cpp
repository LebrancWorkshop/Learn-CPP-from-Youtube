#include <iostream>

int main()
{
	int numberfix[5] = {10, 11, 12, 13, 14}; // Static Array. 
	int numberlist[] = {1,2,3}; // Dynamic Array. 

	std::cout << numberfix << std::endl; // 0x16b812cd0 
	std::cout << sizeof(numberfix) << std::endl; // 20 

	std::cout << numberlist << std::endl; // 0x16f5eacd8 
	std::cout << numberlist[0] << std::endl; // 1 
	std::cout << sizeof(numberlist) << std::endl; // 12 

	return 0;
}