#include "../headers/Animal.hpp"

Animal::Animal(std::string type)
{
	this->type = type;
	if (type == "Dog")
		std::cout << "Dog constructor called." << std::endl;
	else if (type == "Cat")
		std::cout << "Cat constructor called." << std::endl;
	else
	std::cout << "Animal constructor called." << std::endl;
}