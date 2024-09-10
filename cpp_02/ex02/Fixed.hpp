#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
    private :
        int  value;
        const int fractional_bits;
    public :
        Fixed();
        Fixed(const Fixed& fixed);
        Fixed(const int nbr);
        Fixed(const float bnr);
        ~Fixed();
        Fixed& operator=(const Fixed& fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
        bool operator>(Fixed instance2);
        bool operator<(Fixed instance2);
        bool operator>=(Fixed instance2);
        bool operator<=(Fixed instance2);
        bool operator==(Fixed instance2);
        bool operator!=(Fixed instance2);

        Fixed operator+(Fixed instance2);
        Fixed operator-(Fixed instance2);
        Fixed operator*(Fixed instance2);
        Fixed operator/(Fixed instance2);

        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed& instance1, Fixed& instance2);
        static const Fixed& min(const Fixed& instance1, const Fixed& instance2);
        static Fixed& max(Fixed& instance1, Fixed& instance2);
        static const Fixed& max(const Fixed& instance1, const Fixed& instance2);

}; 

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif