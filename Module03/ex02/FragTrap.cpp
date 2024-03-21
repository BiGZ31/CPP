#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
    std::cout << "Yo guys give me a high Five !" << std::endl;
}

void FragTrap::attack(std::string &target)
{
    if (this->energyPoints < 1)
    {
        std::cout << "<FragTrap> " << this->name << " Has no more energy to attack." << std::endl;
        return;
    }
    std::cout << "<FragTrap> " << this->name << " attacked " << target << std::endl;
    this->energyPoints--;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints < 1)
    {
        std::cout << "<FragTrap> " << this->name << " is already dead.. Stop beating it." << std::endl;
        return;
    }
    std::cout << "<FragTrap> " << this->name << " took " << amount << "damage." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints == ClapTrap::hitpoints)
    {
        std::cout << "<FragTrap> " << this->name << "What's wrong with her now !" << std::endl;
        return;
    }
    std::cout << "<FragTrap> " << this->name << " repaired " << amount << "." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called.. its a different messages (i didnt have any ideas.)" << std::endl;
    this->name = name;
    this->hitpoints = ClapTrap::hitpoints;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called.. its a different messages (i didnt have any ideas.)" << std::endl;
}