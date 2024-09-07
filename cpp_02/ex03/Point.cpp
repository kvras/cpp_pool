#include "Point.hpp"

Point::Point() : x(0), y(0){};
Point::Point(float f_x, float f_y) : x(f_x), y(f_y){};

Point::Point(const Point& obj) : x(obj.x) , y(obj.y)
{
}

Point& Point::operator=(const Point& obj){
    (void)obj;
    return *this;
};

Point::~Point(){};

float Point::getX(){
    return x.toFloat();
};

float Point::getY(){
    return y.toFloat();
};