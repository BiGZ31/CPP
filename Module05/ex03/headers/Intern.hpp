//
// Created by Luke Montgomery on 04/04/2024.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include "FormA.hpp"
class Form;

class Intern
{
    public:
        Form *makeForm(std::string name, std::string target);
        Intern();
        ~Intern();
};

#endif //CPP_INTERN_HPP
