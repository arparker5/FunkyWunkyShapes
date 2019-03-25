//
// Created by Andrew on 3/23/2019.
//

#include "Circle.h"
#include <cmath>
#include <fstream>

Circle::Circle(double r): _radius(std::abs(r)){}

std::string Circle::intoPS() {
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps");
    myfile << "gsave\n"
            << _radius << " " << _radius << " translate\n"
            << "0 0 "<< _radius << " 0 360 arc\n"
            << "stroke\n"
            << "grestore";
    myfile.close();
    return "";
}

double Circle::getWidth(){
    return 2*_radius;
}

double Circle::getHeight(){
    return 2*_radius;
}
