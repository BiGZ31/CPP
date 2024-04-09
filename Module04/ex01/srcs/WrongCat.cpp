#include "../headers/WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WRONG CAT Meow!!" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}