#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int number;
        const int fraction;
    public :
        Fixed(int number, int fraction);
        Fixed(const Fixed& fixed);
        ~Fixed();
        Fixed& operator=(const Fixed& fixed);
}; 

#endif