//
// Created by andre on 4/15/2019.
//

#ifndef FUNKYWUNKYSHAPES_TEMPLATE_H
#define FUNKYWUNKYSHAPES_TEMPLATE_H

#include <string>
#include <utility>

class Template {
public:
    virtual ~Template();
    virtual void intoPS() = 0;
    virtual void intoPS(const std::string & fileName) = 0;
    virtual void intoPS(std::fstream & fileStream) = 0;
    virtual void intoPS(std::fstream & fileStream, const std::string & fileName) = 0;
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
    virtual std::pair<double,double> getCenter() = 0;
};


#endif //FUNKYWUNKYSHAPES_TEMPLATE_H
