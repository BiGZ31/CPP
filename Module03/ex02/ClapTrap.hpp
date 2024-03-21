#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		class ScavTrap;
        class FragTrap;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
        int hitpoints;
		int energyPoints;
		int attackDamage;
    private:
        std::string name;
};

#endif
