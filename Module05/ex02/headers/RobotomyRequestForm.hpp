//
// Created by Luke Montgomery on 03/04/2024.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>

class   RobotomyRequestForm
{
    private:
        std::string name;
        bool IsSigned;
        size_t _gradeForSigning;
        size_t _gradeForExecuting;
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void    exec();
};

#endif //CPP_ROBOTOMYREQUESTFORM_HPP
