#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
    private :
        int value;
        const int fractional_bits;
    public :
        Fixed();
        Fixed(const Fixed& fixed);
        Fixed(const int nbr);
        Fixed(const float bnr);
        ~Fixed();
        Fixed& operator=(const Fixed& fixed);
        int getRawBits(void) ;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
}; 

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif