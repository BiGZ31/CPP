#include "../headers/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called." << std::endl;
    this->sound = "Meow.";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

void    Cat::makeSound() {
    std::cout << "Meow." << std::endl;
}