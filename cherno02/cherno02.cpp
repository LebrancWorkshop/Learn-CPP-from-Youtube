// Cherno02: Linking 
#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void LogN(std::string message)
{
	std::cout << message << std::endl;
}

int main()
{
	Log("Hello World");
	LogN("Hello World no pointer.");
	return 0;
}