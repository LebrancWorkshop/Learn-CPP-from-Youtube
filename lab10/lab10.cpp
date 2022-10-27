// Lab10: Structure (Struct).  
#include <iostream>

struct Monster
{
	std::string name;
	int level;
	int hp;
	int power;
}harimau;

int main()
{
	Monster ingat;
	ingat.name = "Ingat";
	ingat.level = 10;
	ingat.hp = 3500;
	ingat.power = 500;

	harimau.name = "Harimau";
	harimau.level = 20;
	harimau.hp = 5000;
	harimau.power = 1000;

	std::cout << "Monster Data" << std::endl;
	std::cout << "Name: " << ingat.name << std::endl;
	std::cout << "Level: " << ingat.level << std::endl;
	std::cout << "HP: " << ingat.hp << std::endl;
	std::cout << "Power: " << ingat.power << std::endl;

	std::cout << " ------ " << std::endl;

	std::cout << "Monster Data" << std::endl;
	std::cout << "Name: " << harimau.name << std::endl;
	std::cout << "Level: " << harimau.level << std::endl;
	std::cout << "HP: " << harimau.hp << std::endl;
	std::cout << "Power: " << harimau.power << std::endl;

	return 0;
}