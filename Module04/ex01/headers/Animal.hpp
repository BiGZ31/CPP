#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        Animal(Animal &copy);
        Animal &operator=(Animal const &copy);
        virtual void makeSound() const;
        virtual std::string getType() const;
};
#endif