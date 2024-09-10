#include "Point.hpp"


bool isPointInTriangle(Point p1, Point p2, Point p3, Point p);

int main()
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point d(-.1, -.1);
    if (isPointInTriangle(a,b,c,d))
        std::cout << "yes";
    else 
        std::cout << "NO";
}
