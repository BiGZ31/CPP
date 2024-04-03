#include "../headers/Bureaucrat.hpp"

std::string    Bureaucrat::GetName()
{
    return this->name;
}

size_t   Bureaucrat::GetGrade()
{
    return this->grade;
}

void    Bureaucrat::printGrade()
{
    std::cout << "\033[1;36m[" << this->name << "]\033[0m bureaucrat grade " << this->grade << std::endl;
}

void    Bureaucrat::printName()
{
    std::cout << "Bureaucrat's name: \033[1;36m" << this->name << "\033[0m" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("\033[1;31m[!] You assigned someone to a grade higher then <maximum> 1.\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\033[1;31m[!] You assigned someone to a lower then <lowest> 150.\033[0m";
}

Bureaucrat::Bureaucrat(std::string name, size_t grade)
{
    try {
        if (grade < 1)
            throw (Bureaucrat::GradeTooHighException());
        else if (grade > 150)
            throw (Bureaucrat::GradeTooLowException());
    }
    catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    this->name = name;
    this->grade = grade;
    std::cout << "\033[1;32mBureaucrat constructor called.\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[1;33mBureaucrat destructor called.\033[0m" << std::endl;
}

//Bureaucrat::Bureaucrat(Bureaucrat &copy)
//{
//    this = copy;
//    std::cout << "Copy Bureaucrat constructor called." << std::endl;
//}
//
//Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
//{
//    if (&copy != this)
//        this = copy;
//    return *this;
//}



