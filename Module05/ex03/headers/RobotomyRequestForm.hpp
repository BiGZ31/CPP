//
// Created by Luke Montgomery on 03/04/2024.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "FormA.hpp"


class   RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const &executor) const;
        void signForm(Bureaucrat someone);
};

#endif //CPP_ROBOTOMYREQUESTFORM_HPP
