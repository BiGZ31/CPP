#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Dog;
class Cat;

class Animal
{
public:
		Animal(std::string type);
		~Animal();
        void makeSound();
        void GetType();
	protected:
		std::string type;
};

#endif