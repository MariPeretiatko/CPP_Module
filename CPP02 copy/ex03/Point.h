//
// Created by mperetia on 20.05.24.
//

#ifndef CPP_POINT_H
#define CPP_POINT_H

#include "Fixed.h"

class Point {
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(float x, float y);
    Point(const Point &obj);
    Point& operator=(const Point &obj);
    bool operator ==(const Point& obj) const;

    float getX() const;
    float getY() const;
    ~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif //CPP_POINT_H
