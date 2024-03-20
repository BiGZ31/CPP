#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points to attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points to attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points of health!" << std::endl;
	this->energyPoints -= 1;
}