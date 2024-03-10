#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie* newZombie( std::string name );
		~Zombie() {}
		Zombie() {}
		void randomChump( std::string name );
		std::string get_name() const { return this->_name; };
		void set_name(std::string name) {this->_name = name; };
		Zombie(std::string name) { this->_name = name; };
		void announce();
};

#endif