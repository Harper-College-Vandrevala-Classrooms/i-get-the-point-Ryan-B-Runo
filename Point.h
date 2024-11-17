#ifndef I_GET_THE_POINT_RYAN_B_RUNO_POINT_H
#define I_GET_THE_POINT_RYAN_B_RUNO_POINT_H


class Point {
private:
    double x, y;
public:
    Point(double x, double y);

    bool operator==(const Point &p) const;

    bool operator!=(const Point &p) const;

    double operator-(const Point &p) const;

    Point operator/(const Point &p) const;

    double getX() const;

    double getY() const;
};

#endif //I_GET_THE_POINT_RYAN_B_RUNO_POINT_H
