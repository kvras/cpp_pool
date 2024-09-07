#include <cmath>
#include "Fixed.hpp"

class Point{
    private :
        const Fixed x;
        const Fixed y;
    public :
        Point();
        Point(float f_x, float f_y);
        Point(const Point& obj);
        Point& operator=(const Point& obj);
        ~Point();
        float getX();
        float getY();
};