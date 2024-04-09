#include "../headers/Animal.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongCat.hpp"

int main(void)
{
    const Animal* zoo[4];
    int i = 0;
    while(i < 4)
    {
        if (i < 2)
            zoo[i] = new Dog();
        else if (i >= 2)
            zoo[i] = new Cat();
        i++;
    }
    i = 0;
    return 0;
}
