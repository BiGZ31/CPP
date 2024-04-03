//
// Created by Luke Montgomery on 03/04/2024.
//
#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) {
    std::cout << "RobotomyRequestForm construcor called." << std::endl;
    this->_gradeForSigning = 72;
    this->_gradeForExecuting = 45;
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::exec() {
    srand(time ( NULL ));
    int i = (rand() %2);
    if (i == 0)
        std::cout << this->target << " got robotomized." << std::endl;
    else if (i == 1)
        std::cout << this->target <<" robotomy failed." << std::endl;
}