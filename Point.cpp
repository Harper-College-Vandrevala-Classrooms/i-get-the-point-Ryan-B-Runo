#include <cmath>

#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

bool Point::operator==(const Point &p) const {
    return x == p.x && y == p.y;
}

bool Point::operator!=(const Point &p) const {
    return !(p == *this);
}

double Point::operator-(const Point &p) const {
    return sqrt((pow(this->x - p.x,2))+(pow(this->y - p.y, 2)));
}

Point Point::operator/(const Point &p) const {
    return Point((this->x+p.x)/2,(this->y + p.y)/2);
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
