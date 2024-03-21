#include "caractere.hpp"


Caractere::Caractere(std::string name)
{
	this->name = name;
	std::cout << "Constructor Called !" << std::endl;
}

Caractere::~Caractere()
{
	std::cout << "Destructor Called !" << std::endl;
}

void Caractere::present()
{
	std::cout << "Hi my name is " << this->name << "." << std::endl;
}

void Caractere::takeDamage(int damage)
{
	std::cout << this->name << " recieved " << damage << " of damage." << std::endl;
	this->health = (this->health - damage);
}

void Caractere::attack(std::string target)
{
	if (this->Stamina < 1)
	{
		std::cout << this->name << "has no energy to attack." << std::endl;
		return;
	}
	std::cout << this->name << " attacked " << target << "." << std::endl;
	this->Stamina--;
}
