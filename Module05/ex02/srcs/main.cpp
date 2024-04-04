#include "../headers/Bureaucrat.hpp"
#include "../headers/FormA.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat  Luke("Luke", 1);
    Bureaucrat  Geoffrey("Le G", 150);
    ShrubberyCreationForm   arbre("pls");
    RobotomyRequestForm     random("Correcteur");
    PresidentialPardonForm  sorry("Lee Harvey Oswald");


    sorry.signForm(Luke);
    Luke.executeForm(sorry);
    random.signForm(Geoffrey);
    Geoffrey.executeForm(random);
    random.signForm(Luke);
    Geoffrey.executeForm(random);
    Luke.executeForm(random);
    arbre.signForm(Luke);
    Luke.executeForm(arbre);
    return 0;
}
