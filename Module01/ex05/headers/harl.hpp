#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class harl
{
	public:
		harl();
		~harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif