#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(std::string type);
		~Animal();
		class Dog;
		class Cat;
	private:
		std::string type;
};