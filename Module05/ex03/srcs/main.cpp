#include "../headers/Bureaucrat.hpp"
#include "../headers/FormA.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Intern.hpp"

int main(void)
{
    Bureaucrat  Luke("Luke", 1);
    Intern  test;

    Form *testForm = test.makeForm("ShrubberyCreationForm", "plswork");


    testForm->execute(Luke);
    return 0;
}
