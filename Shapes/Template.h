//
// Created by Joseph Byam on 2019-04-15.
//

#ifndef FUNKYWUNKYSHAPES_TEMPLATE_H
#define FUNKYWUNKYSHAPES_TEMPLATE_H

#include <string>
#include <utility>

class Template {
public:
    virtual ~Template();
    virtual void intoPS() = 0;
    virtual void intoPS(std::fstream & fileStream) = 0;
    virtual void intoPS(const std::string & fileName) = 0;
    virtual void intoPS(std::fstream & fileStream, const std::string & fileName) = 0;
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
    virtual std::pair<double,double> getCenter() = 0;
};

template <typename T>
class CRTPTemplate : public Template
{
    ~CRTPTemplate() : Template::~Template();
    CRTPintoPS() : Template::intoPS();
    CRTPintoPS(std::fstream & fileStream) : Template::intoPS(&fileStream);
    CRTPintoPS(const std::string & fileName) : Template::intoPS(&fileName);
    CRTPintoPS(std::fstream & fileStream, const std::string & fileName) : Template::intoPS(&fileStream, &fileName);
    getWidth() : Template::getWidth();
    getHeight() : Template::getHeight();
    std::pair<double,double> getCenter() : Template::getCenter();
};


#endif //FUNKYWUNKYSHAPES_TEMPLATE_H
