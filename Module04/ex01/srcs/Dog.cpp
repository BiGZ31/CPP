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

Dog::Dog(Dog &copy)
{
    this->type = copy.type;
    std::cout << "Copy Dog constructor called." << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
    this->type = copy.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOOF WOOF!" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}