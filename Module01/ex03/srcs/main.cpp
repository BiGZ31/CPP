#include "../headers/Weapon.hpp"
#include "../headers/HumanA.hpp"
#include "../headers/HumanB.hpp"

class Weapon;
class HumanA;
class HumanB;

int	main(int ac, char **av)
{
	Weapon wp = Weapon("Knife");
	Weapon wp2 = Weapon("Knife");

	HumanA hma = HumanA("Luke", wp);
	HumanB hmb = HumanB("Geoffrey");

	hma.attack();
	wp.setType("Sword");
	hma.attack();

	std::cout << std::endl;
	hmb.setWeapon(wp2);
	hmb.attack();
	wp2.setType("Sword");
	hmb.attack();

	return 0;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}
HumanB::HumanB(std::string name) : _name(name), _weapon() {}
HumanB::~HumanB() {}
Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}