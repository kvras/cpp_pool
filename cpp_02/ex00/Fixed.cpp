#include "Fixed.hpp"

Fixed::Fixed() : number(0), fraction(8) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : fraction(fixed.fraction) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &fixed) {
        number = fixed.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout <<"getRawBits member function called" << std::endl;
    return number;
}

void Fixed::setRawBits(int const raw)  {
    number = raw;
    std::cout <<"setRawBits member function called" << std::endl;
}
