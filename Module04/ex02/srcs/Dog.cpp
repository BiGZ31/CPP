#include "../headers/Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "WOOF WOOF!" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}