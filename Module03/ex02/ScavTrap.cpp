#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[0;31mScavTrap Constructor Called\033[0m" << std::endl;
    this->name = name;
    this->hitpoints = ClapTrap::hitpoints;
    this->energyPoints = ClapTrap::energyPoints;
    this->attackDamage = ClapTrap::attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;31mScavTrap destructor called\033[0m" << std::endl;
}