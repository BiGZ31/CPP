#include "../headers/zombie.hpp"

void	Zombie::announce()
{
	if (strcmp(this->_name.c_str(), "Foo") == 0)
	{
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
		return ;
	}
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	int i = 0;
	while(i < N)
	{
		zombie[i].set_name(name);
		zombie[i].announce();
		i++;
	}
	return zombie;
}

Zombie::Zombie() {}

Zombie::~Zombie() {}