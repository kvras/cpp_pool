#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point {
    private :
        Fixed const x;
        Fixed const y;
    public :
        Point();
        Point(const float x, const float y);
        Point(const Point& copy);
        ~Point();
        Fixed const getX();
        Fixed const getY();
        Point& operator=(const Point& instance);
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif