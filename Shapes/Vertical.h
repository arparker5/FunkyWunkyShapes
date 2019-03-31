//
// Created by Joseph Byam on 3/30/2019.
//

#ifndef FUNKYWUNKYSHAPES_VERTICAL_H
#define FUNKYWUNKYSHAPES_VERTICAL_H

#include "Shape.h"

class Vertical : public Shape{
public:
    explicit Vertical(const map<Shape,string> myShapes); //Don't know if it should be by reference
    void intoPS() override;
    void intoPS(const std::string & fileName) override;
    void intoPS(std::fstream & fileStream) override;
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
};


#endif //FUNKYWUNKYSHAPES_VERTICAL_H

