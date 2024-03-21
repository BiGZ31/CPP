#include "caractere.hpp"
#include "Warrior.hpp"

int	main()
{
	Caractere   Steve("Steve");
	Warrior     Herobrine("Herobrine");

	Steve.present();
	Steve.attack("Alex");
	Steve.takeDamage(5);
    Herobrine.present();
	Herobrine.ThunderStrike();
	return 0;
}
