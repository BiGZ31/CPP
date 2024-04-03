#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int main(void)
{
    Bureaucrat  Luke("Luke", 1);
    Bureaucrat  Geoffrey("Le G", 150);
    Form        contract("Pay Rise", 20, 5);

    contract.signForm(Luke);
    contract.signForm(Geoffrey);

    return 0;
}
