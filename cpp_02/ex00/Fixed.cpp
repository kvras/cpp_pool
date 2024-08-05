#include "Fixed.hpp"

Fixed::Fixed(int nbr, int fract) : fraction(fract) {
    std::cout << "Default constructor called" << std::endl;
    number = nbr;
}

Fixed::Fixed(const Fixed& fixed) : fraction(fixed.fraction) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    if (this != &fixed) {
        number = fixed.number;
    }
    std::cout<< "Copy assignment operator called" << std::endl;
    return *this;
}
