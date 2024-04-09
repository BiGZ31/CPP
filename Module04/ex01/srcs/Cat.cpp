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

Cat::Cat(Cat &copy)
{
    this->type = copy.type;
    std::cout << "Copy Cat constructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
    this->type = copy.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}