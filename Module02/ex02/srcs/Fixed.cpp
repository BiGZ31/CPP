#include "../headers/Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const float float_number)
{
    this->value = roundf(float_number * pow(2, this->fractionalBits));
}

Fixed::Fixed(const int integer)
{
    this->value = integer * static_cast<int>(pow(2, this->fractionalBits));
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}


float Fixed::toFloat( void ) const
{
    return (this->value / pow(2, this->fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->value / static_cast<int>(pow(2, this->fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed& other) {
    this->value = other.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fi)
{
    os << fi.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value  =  raw;
}

bool  Fixed::operator<(const Fixed &other)
{
    return this->value < other.value;
}

bool  Fixed::operator>(const Fixed &other)
{
    return this->value > other.value;
}

bool  Fixed::operator<=(const Fixed &other)
{
    return this->value <= other.value;
}

bool  Fixed::operator>=(const Fixed &other)
{
    return this->value >= other.value;
}

bool  Fixed::operator==(const Fixed &other)
{
    return this->value == other.value;
}

bool  Fixed::operator!=(const Fixed &other)
{
    return this->value != other.value;
}

Fixed  Fixed::operator+(const Fixed &other)
{
    Fixed res;
    res.value = this->value + other.value;
    return res;
}

Fixed  Fixed::operator-(const Fixed &other)
{
    Fixed res;
    
    res.value = this->value - other.value;
    return res;
}

Fixed   Fixed::operator*(const Fixed &other)
{
    Fixed res;

    res.value = (this->value * other.value) / (pow(2, this->fractionalBits));
    return res;
}

Fixed   Fixed::operator/(const Fixed &other)
{
    Fixed res;

    res.value = (this->value / other.value) * (pow(2, this->fractionalBits));
    return res;
}

Fixed   &Fixed::operator++(void)
{
    this->value += 1;
    return *this;
}

Fixed   &Fixed::operator--(void)
{
    this->value -= 1;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp = *this;
    
    (*this).value--;
    return tmp;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp = *this;
    
    (*this).value++;
    return tmp;
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1;
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1;
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
}
const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
}