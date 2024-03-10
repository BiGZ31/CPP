#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType() { return this->_type; }
		void setType(std::string type) { this->_type = type; }
	private:
		std::string _type;
};

#endif