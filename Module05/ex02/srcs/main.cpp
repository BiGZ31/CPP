#include "../headers/Bureaucrat.hpp"
#include "../headers/FormA.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat  Luke("Luke", 1);
    Bureaucrat  Geoffrey("Le G", 150);
    ShrubberyCreationForm   tompere("pls");
    RobotomyRequestForm     random("Correcteur");
    PresidentialPardonForm  sorry("Lee Harvey Oswald");

    tompere.exec();
    random.exec();
    sorry.exec();

    return 0;
}
