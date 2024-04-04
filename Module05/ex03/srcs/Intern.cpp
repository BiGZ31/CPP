//
// Created by Luke Montgomery on 04/04/2024.
//

#include "../headers/Intern.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern deconstructor called" << std::endl;
}

static Form	*makePresident(const std::string target)
{
    std::cout << "Intern created a PresidentialPardonForm named " << target << std::endl;
    return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
    std::cout << "Intern created a RobotomyRequestForm named " << target << std::endl;
    return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
    std::cout << "\033[34mIntern created a ShruberyFile named " << target << ".\033[0m" << std::endl;
    return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
    if (name == "PresidentialPardonForm")
        return makePresident(target);
    else if (name == "RobotomyRequestForm")
        return makeRobot(target);
    else if (name == "ShrubberyCreationForm")
        return makeShrubbery(target);
    else
    std::cout << "\033[33mIntern can't create a form called " << name << "\033[0m" << std::endl;
    return NULL;
}