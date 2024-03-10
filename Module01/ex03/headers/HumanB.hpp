#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() { std::cout << this->_name << " attacked with " << this->_weapon->getType() << std::endl; }
		void setWeapon(Weapon &weapon) { this->_weapon = &weapon;}
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif