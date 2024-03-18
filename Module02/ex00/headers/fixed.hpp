#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _fixedInt;
		static const int _fractionalBits = 8;
};
#endif