// Score: 80 / 100 

#include <iostream>

int main()
{
	int jump_rate, distance;

	std::cin >> jump_rate >> distance;

	if(distance % jump_rate == 0)
	{
		std::cout << distance / jump_rate << std::endl;
	}
	else
	{
		std::cout << (distance / jump_rate) + 1 << std::endl;
	}
	return 0;
}