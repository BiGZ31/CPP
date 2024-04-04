//
// Created by Luke Montgomery on 03/04/2024.
//

#include "../headers/FormA.hpp"
#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("name", 25 ,5) {
    std::cout << "PresidentialPardonForm constructor called." << std::endl;
    this->_gradeForSigning = 25;
    this->_gradeForExecuting = 5;
    this->target = target;
    this->name = "PresidentialPardonForm";
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void    PresidentialPardonForm::signForm(Bureaucrat someone) {
        try{
            if (this->IsSigned == 1)
            {
                std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't sign the form because its already signed.\033[0m" << std::endl;
                return ;
            }
            if (someone.GetGrade() > this->_gradeForSigning)
                throw (Form::GradeTooLowException());
            else if (someone.GetGrade() < this->_gradeForSigning)
            {
               this->IsSigned = 1;
                std::cout << someone.GetName() << " signed the form " << this->name << "." << std::endl;
            }
        }
        catch (const std::exception &e){
            std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't sign the form because his grade is too low.\033[0m" << std::endl;
        }
}

void PresidentialPardonForm::execute(Bureaucrat const &someone) const
{
    try{
        if (this->IsSigned != 1)
        {
            std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't execute the form because its not signed.\033[0m" << std::endl;
            return ;
        }
        if (someone.GetGrade() > this->_gradeForSigning)
            throw (Form::GradeTooLowException());
        else
        {
            std::cout << someone.GetName() << " executed the form " << this->name << "." << std::endl;
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        }

    }
    catch (const std::exception &e){
        std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't execute the form because his grade is too low.\033[0m" << std::endl;
    }
}