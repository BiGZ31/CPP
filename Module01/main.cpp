#include "Zombie.hpp"

class Zombie{
public:
	std::string name;
	Zombie(std::string name);
	~Zombie();
	void announce();
};

void	announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	
}