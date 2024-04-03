//
// Created by Luke Montgomery on 01/04/2024.
//

#include "../headers/Form.hpp"

Form::Form(std::string name, size_t gradeToSigne, size_t gradeToExecute)
{
    this->name = name;
    this->_gradeForSigning = gradeToSigne;
    this->_gradeForExecuting = gradeToExecute;
    std::cout << "Form constructor called." << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called." << std::endl;
}

void Form::beSigned(Bureaucrat someone)
{
    this->IsSigned = 1;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "";
}

size_t Form::getGradeSigning()
{
    return this->_gradeForSigning;
}

std::string Form::getName()
{
    return this->name;
}

size_t Form::getGradeExecuting()
{
    return this->_gradeForExecuting;
}

int Form::signForm(Bureaucrat someone)
{
    try{
        if (this->IsSigned == 1)
        {
            std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't sign the form because its already signed." << std::endl;
            return 1;
        }
        if (someone.GetGrade() > this->_gradeForSigning)
            throw (Form::GradeTooLowException());
        else if (someone.GetGrade() < this->_gradeForSigning)
        {
            beSigned(someone);
            std::cout << someone.GetName() << " signed the form." << std::endl;
        }
    }
    catch (const std::exception &e){
        std::cout << "\033[1;31m[!] " << someone.GetName() << " couldn't sign the form because his grade is too low." << std::endl;
    }
    return 0;
}
