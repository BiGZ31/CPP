//
// Created by Luke Montgomery on 04/04/2024.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "FormA.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;

public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    //void exec(Bureaucrat someone);
    void signForm(Bureaucrat someone);
    void execute(Bureaucrat const &executor) const;
};

#endif //CPP_PRESIDENTIALPARDONFORM_HPP
