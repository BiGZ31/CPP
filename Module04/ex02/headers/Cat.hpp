#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        void makeSound() const;
        std::string getType() const;
    private:
        Brain* _brain;
};

#endif