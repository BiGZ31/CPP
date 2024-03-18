#include "../headers/fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedInt);
}

void Fixed::setRawBits(int const raw)
{
	_fixedInt = raw;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedInt = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedInt = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedInt = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}