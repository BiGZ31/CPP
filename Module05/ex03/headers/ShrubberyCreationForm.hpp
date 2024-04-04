#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "FormA.hpp"
class Form;

class  ShrubberyCreationForm : public Form
{
    private:
        std::string name;
        bool IsSigned;
        size_t _gradeForSigning;
        size_t _gradeForExecuting;
        std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
        void signForm(Bureaucrat someone);
};

#endif
