#include "Point.hpp"

Point::Point(){}

Point::Point(const float nbr_x, const float nbr_y) : x(nbr_x) , y(nbr_y) {}

Point::Point(const Point& copy) : x(copy.x) , y(copy.y) {}

Point::~Point(){}

Fixed const Point::getX(){
    return (x);
}
Fixed const Point::getY(){
    return (y);
}

Point& Point::operator=(const Point& instance){
    (void)instance;
    return *this;
}

