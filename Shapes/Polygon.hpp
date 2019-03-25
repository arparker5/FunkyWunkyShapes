//
// Created by Dylan Palmieri on 3/25/2019.
//

#include "Shape.h"

#ifndef FUNKYWUNKYSHAPES_POLYGON_HPP
#define FUNKYWUNKYSHAPES_POLYGON_HPP

class Polygon: public Shape {
public:
    Polygon(int numOfSides, double sideLength);
    void intoPS() override;
    double getWidth() override;
    double getHeight() override;

private:
    int _numOfSides;
    double _sideLength;
};


#endif //FUNKYWUNKYSHAPES_POLYGON_HPP