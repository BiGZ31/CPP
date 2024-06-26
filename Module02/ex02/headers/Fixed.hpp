#include <iostream>

class Fixed
{
  private:
    int value;
    static int const fractionalBits = 8;

  public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &copy);
    Fixed(const int integer);
    Fixed(const float float_number);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed& other);
    bool  operator<(const Fixed &other);
    bool  operator>(const Fixed &other);
    bool  operator<=(const Fixed &other);
    bool  operator>=(const Fixed &other);
    bool  operator==(const Fixed &other);
    bool  operator!=(const Fixed &other);
    Fixed   operator+(const Fixed &other);
    Fixed   operator-(const Fixed &other);
    Fixed   operator*(const Fixed &other);
    Fixed   operator/(const Fixed &other);
    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator--(int);
    Fixed   operator++(int);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    static  Fixed &min(Fixed &fix1, Fixed &fix2);
    static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
    static  Fixed &max(Fixed &fix1, Fixed &fix2);
    static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);