#include <unistd.h>
#include <iostream>
#include <string>
#include <cstring>

int	main(int ac, char **av)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Memory address of string: " << &str << std::endl;
	std::cout << "Memory address of ptr: " << &ptr << std::endl;
	std::cout << "Memory address of reference: " << &ref << std::endl;
	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value of ptr: " << *ptr << std::endl;
	std::cout << "Value of reference: " << ref << std::endl;
	return 0;
}