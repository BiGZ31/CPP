#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound() { std::cout << "Woof." << std::endl;}
};