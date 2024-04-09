#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}