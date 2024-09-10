#include "Fixed.hpp"

Fixed::Fixed() : fractional_bits(8) {
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& fixed) : fractional_bits(fixed.fractional_bits) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &fixed) {
        value = fixed.value;
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout <<"getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
    std::cout <<"setRawBits member function called" << std::endl;
}

// <----------------------- Addeed -------------------------->

Fixed::Fixed(const int nbr) : fractional_bits(8) {
    std::cout << "Int constructor called" << std::endl;
    value = nbr << fractional_bits;
}

Fixed::Fixed(const float nbr) : fractional_bits(8) {
    std::cout << "Float constructor called" << std::endl;
    value = roundf(nbr * (1 << fractional_bits));
}

float Fixed::toFloat() const{
    return (float)value / (1 << fractional_bits);
}

int Fixed::toInt() const{
    return value >> fractional_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
