#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "caractere.hpp"
#include <string>

class Warrior : public Caractere
{
	public:
		Warrior(std::string name);
		~Warrior();
		void ThunderStrike();
        void present();
	private:
		std::string name;
        int Health;
        int Stamina;
        int speed;
};

#endif 