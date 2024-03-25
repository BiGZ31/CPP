#include "../headers/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Animal Sound.." << std::endl;
}

void Animal::GetType()
{
    std::cout << this->type << std::endl;
}
