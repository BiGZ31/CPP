#include "Dog.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		void makeSound() { std::cout << "Meow." << std::endl;}
};