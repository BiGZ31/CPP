#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack() { std::cout << this->_name << " attacked with " << this->_weapon.getType() << std::endl; }
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif