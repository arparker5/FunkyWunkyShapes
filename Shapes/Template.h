//
// Created by andre on 4/15/2019.
//

#ifndef FUNKYWUNKYSHAPES_TEMPLATE_H
#define FUNKYWUNKYSHAPES_TEMPLATE_H

#include <string>
#include <utility>
#include <memory>
#include <vector>
#include "Shape.h"

class Template {
public:
    virtual ~Template();
    void intoPS();
    void intoPS(const std::string & fileName);
    void intoPS(std::fstream & fileStream);
    virtual void intoPS(std::fstream & fileStream, const std::string & fileName) = 0;
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
};


#endif //FUNKYWUNKYSHAPES_TEMPLATE_H
