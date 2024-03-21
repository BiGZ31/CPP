#include "Warrior.hpp"

Warrior::Warrior(std::string name) : Caractere(name)
{
	std::cout << "Warrior constructor called." << std::endl;
    this->name = name;
    this->health = health;
    this->Stamina = Stamina;
    this->speed = speed;
    std::cout << "this is not working." << std::endl;
}

void    Warrior::present()
{
    std::cout << "Im a Warrior ! Don't mess with me. My name is " << this->name << std::endl;
}


Warrior::~Warrior()
{
	std::cout << "Warrior destructor called." << std::endl;
}

void	Warrior::ThunderStrike()
{
	std::cout << this->name << "killed Alex with the thunder. (no one likes Alex anyways..)" << std::endl;
}
