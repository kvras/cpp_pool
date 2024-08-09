#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float areaABC = abs((a.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-a.getY()) + c.getX()*(a.getY()-b.getY()))/2.0);

    // Calculate the area of the triangle PBC
    float areaPBC = abs((point.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-point.getY()) + c.getX()*(point.getY()-b.getY()))/2.0);

    // Calculate the area of the triangle PAC
    float areaPAC = abs((a.getX()*(point.getY()-c.getY()) + point.getX()*(c.getY()-a.getY()) + c.getX()*(a.getY()-point.getY()))/2.0);

    // Calculate the area of the triangle PAB
    float areaPAB = abs((a.getX()*(b.getY()-point.getY()) + b.getX()*(point.getY()-a.getY()) + point.getX()*(a.getY()-b.getY()))/2.0);

    // If the sum of the areas of PBC, PAC, and PAB is equal to the area of ABC, then P lies inside the triangle
    return (areaABC == areaPBC + areaPAC + areaPAB);
}
