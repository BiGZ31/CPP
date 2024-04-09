#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Unknown animal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
