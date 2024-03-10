#include "../headers/Zombie.hpp"
#include "string.h"
#include "unistd.h"
#include "iostream"

class Zombie;

Zombie* Zombie::newZombie( std::string name )
{
	return (new Zombie(name));
}

void	Zombie::announce()
{
	if (strcmp(this->_name.c_str(), "Foo") == 0)
	{
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
		return ;
	}
	Zombie::newZombie("a");
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}