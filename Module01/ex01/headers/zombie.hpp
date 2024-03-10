#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

class Zombie
{
	public:
	~Zombie();
	Zombie();
	void announce(void);
	void set_name(std::string name) { this->_name = name; };
	private:
		std::string _name;
		std::string _type;
};

Zombie* zombieHorde( int N, std::string name );

#endif