#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string name;
		int hitpoints;
		int energyPoints;
		int attackDamage;
};
