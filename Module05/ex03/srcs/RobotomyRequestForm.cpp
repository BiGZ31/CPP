//
// Created by Luke Montgomery on 03/04/2024.
//
#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("name", 72, 45) {
    std::cout << "RobotomyRequestForm construcor called." << std::endl;
    this->_gradeForSigning = 72;
    this->_gradeForExecuting = 45;
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &someone) const {
    try {
        if (this->IsSigned != 1) {
            std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't execute the form because its not signed.\033[0m"
                      << std::endl;
            return;
        }
        if (someone.GetGrade() > this->_gradeForSigning)
            throw (Form::GradeTooLowException());
        else {
            srand(time(NULL));
            int i = (rand() % 2);
            if (i == 0)
                std::cout << this->target << " got robotomized." << std::endl;
            else if (i == 1)
                std::cout << this->target << " robotomy failed." << std::endl;
        }
    }
    catch (const std::exception &e) { // Move catch block outside of the try block
        std::cout << "\033[1;31m[!] " << someone.GetName()
                  << " couldn't execute the form because his grade is too low.\033[0m" << std::endl;
    }
}


    void RobotomyRequestForm::signForm(Bureaucrat someone) {
        try {
            if (this->IsSigned == 1) {
                std::cout << "\033[1;31m[!] " << someone.GetName()
                          << " couldn't sign the form because its already signed.\033[0m" << std::endl;
                return;
            }
            if (someone.GetGrade() > this->_gradeForSigning)
                throw (Form::GradeTooLowException());
            else if (someone.GetGrade() < this->_gradeForSigning) {
                this->IsSigned = 1;
                std::cout << someone.GetName() << " signed the form " << this->name << "." << std::endl;
            }
        }
        catch (const std::exception &e) {
            std::cout << "\033[1;31m[!] " << someone.GetName()
                      << " couldn't sign the form because his grade is too low.\033[0m" << std::endl;
        }
    }