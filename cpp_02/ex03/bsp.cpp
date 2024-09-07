#include "Point.hpp"

double dotProduct(Point A, Point B) {
    return A.getX() * B.getX() + A.getY() * B.getY();
}

double magnitude(Point A) {
    return std::sqrt(A.getX() * A.getX() + A.getY() * A.getY());
}

bool isPointOnLineSegment(Point A, Point B, Point P) {
    Point AP(P.getX() - A.getX(), P.getY() - A.getY());
    Point AB(B.getX() - A.getX(), B.getY() - A.getY());

    if (dotProduct(AP, AB) < 0) {
        return false;
    }

    if (dotProduct(AP, AP) > dotProduct(AB, AB)) {
        return false;
    }

    return true;
}

double calculateArea(Point p1, Point p2, Point p3) {
    return std::abs((p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY()-p1.getY()) + p3.getX()*(p1.getY()-p2.getY()))/2.0);
}

bool isPointInTriangle(Point p1, Point p2, Point p3, Point p) {

    double areaOriginal = calculateArea(p1, p2, p3);
    double area1 = calculateArea(p, p2, p3);
    double area2 = calculateArea(p1, p, p3);
    double area3 = calculateArea(p1, p2, p);
    if ((area1 + area2) == areaOriginal || (area1 + area3) == areaOriginal || (area2 + area3) == areaOriginal)
        return false;
    if (area1 == areaOriginal || area2 == areaOriginal || area3 == areaOriginal)
        return false;
    return areaOriginal == (area1 + area2 + area3);
}