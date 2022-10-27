#include <iostream>

int main()
{
	static int static_a = 10;
	int a = 5;
	std::cout << "static_a: " << static_a + 2 << std::endl;
	std::cout << "a: " << a + 2 << std::endl;
	return 0;
}