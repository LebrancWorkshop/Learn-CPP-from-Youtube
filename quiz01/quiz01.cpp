#include <iostream>
#include <cmath>

int main()
{
	double a;
	double b;
	std::cout << "Enter A and B: ";
	std::cin >> a;
	std::cin >> b;
	std::cout << "Result: " << pow(pow(a, 2) + pow(b, 2), 0.5) << std::endl;
	return 0;
}