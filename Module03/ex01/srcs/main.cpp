#include "../headers/ClapTrap.hpp"

int	main()
{
	ClapTrap claptrap("Figure01");
	ClapTrap newClaptrap("Figure02");
	claptrap.attack("Correcteur");
	claptrap.takeDamage(0);
	claptrap.beRepaired(3);
	return 0;
}
