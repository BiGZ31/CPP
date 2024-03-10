#include "../headers/harl.hpp"

int	ft_translate(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

void	ft_switch(char *argv, harl & k)
{
	switch (ft_translate(argv))
	{
		case 0:
			k.complain("DEBUG");
		case 1:
			k.complain("INFO");
		case 2:
			k.complain("WARNING");
		case 3:
			k.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int ac, char **av)
{
	harl yes;
	if (ac != 2)
	{
		std::cout << "Usage: ./harl [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return 1;
	}
	ft_switch(av[1], yes);
	return 0;
}

harl::harl() {}
harl::~harl() {}