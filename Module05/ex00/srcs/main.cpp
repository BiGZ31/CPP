//
// Created by Luke Montgomery on 01/04/2024.
//

#include "../headers/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat Luke("Luke", 1);
    Bureaucrat Geoffrey("Le G", 150);
    Bureaucrat Marco("Marcolito", 165); // grade is too low should show an error message.
    Bureaucrat Aymeric("Un des 7 membres fondateur du projet Lobby", 0); // grade is too high should show an error message.
    Luke.printName();
    Luke.printGrade();
    Geoffrey.printName();
    Geoffrey.printGrade();
    return 0;
}
