#include <iostream>

class Fixed
{
  private:
    int value;
    static int const fractionalBits = 8;

  public:
    Fixed();
    Fixed(Fixed const &copy);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    Fixed(const int integer);
    Fixed(const float float_number);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);