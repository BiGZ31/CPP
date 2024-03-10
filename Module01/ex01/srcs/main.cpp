#include "../headers/zombie.hpp"

class Zombie;

int	main(int ac, char **av)
{
	// if (ac < 2)
	// {
	// 	std::cout << "Usage: ./horde [ammount] [name]" << std::endl;
	// 	return 1;
	// }
	Zombie *horde = zombieHorde(5, "test");
	delete[] horde;
	std::cout << "Zombies are dead" << std::endl;
	return 0;
}