//
// Created by Luke Montgomery on 03/04/2024.
//

#include "../headers/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target){
    std::cout << "PresidentialPardonForm constructor called." << std::endl;
    this->_gradeForSigning = 25;
    this->_gradeForExecuting = 5;
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void    PresidentialPardonForm::exec() {
    std::cout << this->target << " has been pardoned by John F Kennedy" << std::endl;
}