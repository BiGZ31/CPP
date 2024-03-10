#include "../headers/harl.hpp"

int main(void)
{
	harl yes;
	std::string str;
	while (1)
	{
		std::cin >> str;
		yes.complain(str);
	}
	delete &yes;
	return 0;
}

harl::harl() {}
harl::~harl() {}