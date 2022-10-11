#include <iostream>

int main()
{
	int a, b, c, score;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	
	score = a + b + c;

	if(score >= 80 && score <= 100)
	{
		std::cout << "A" << std::endl;
	}
	else if(score >= 75 && score <= 79)
	{
		std::cout << "B+" << std::endl;
	}
	else if(score >= 70 && score <= 74)
	{
		std::cout << "B" << std::endl;
	}
	else if(score >= 65 && score <= 69)
	{
		std::cout << "C+" << std::endl;
	}
	else if(score >= 60 && score <= 64)
	{
		std::cout << "C" << std::endl;
	}
	else if(score >= 55 && score <= 59)
	{
		std::cout << "D+" << std::endl;
	}
	else if(score >= 50 && score <= 54)
	{
		std::cout << "D" << std::endl;
	}
	else if(score >= 0 && score <= 49)
	{
		std::cout << "F" << std::endl;
	}
	else
	{
		std::cout << "Invalid score" << std::endl;
	}

	return 0;
}