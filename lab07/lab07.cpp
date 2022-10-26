#include <iostream>

int main()
{
	int *p;
	int a = 10;
	p = &a;
	std::cout << "P: " << p << std::endl;
	std::cout << "*P: " << *p << std::endl;
	return 0;
}