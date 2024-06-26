#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}