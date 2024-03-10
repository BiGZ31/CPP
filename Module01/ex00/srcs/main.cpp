#include "../headers/Zombie.hpp"
#include <string.h>
#include <unistd.h>
#include <iostream>

class Zombie;

int main(void)
{
	Zombie *albert = NULL;
	Zombie *luke = NULL;
	Zombie *Foo = NULL;
	
	Foo = Foo->newZombie("Foo");
	albert = albert->newZombie("Albert");
	luke = luke->newZombie("Luke");
	Foo->announce();
	luke->announce();
	albert->announce();
	luke->randomChump("Bar");
	std::cout << "Deleting zombies..." << std::endl;
	std::cout << luke->get_name() << std::endl;
	std::cout << albert->get_name() << std::endl;
	std::cout << Foo->get_name() << std::endl;
	delete luke;
	delete albert;
	delete Foo;
	return 0;
}