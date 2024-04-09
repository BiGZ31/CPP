#include "../headers/Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.type;
    std::cout << "Copy Animal constructor called." << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "print sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal &Animal::operator=(Animal const &copy)
{
    this->type = copy.type;
    return *this;
}
