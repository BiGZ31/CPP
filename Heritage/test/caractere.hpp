#ifndef CARACTERE_HPP
#define CARACTERE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Caractere
{
	public:
		Caractere(std::string name);
		~Caractere();
		class Warrior;
		void present();
		void attack(std::string target);
		void takeDamage(int damage);
    protected:
		int health;
		int Stamina;
		int speed;
    private:
        std::string name;
};


#endif