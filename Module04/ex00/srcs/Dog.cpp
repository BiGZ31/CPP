#include "../headers/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called." << std::endl;
    this->sound = "WOOF!";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

void    Dog::makeSound() {
    std::cout << "WOOF!" << std::endl;
}


