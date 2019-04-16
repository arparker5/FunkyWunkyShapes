//
// Created by andre on 4/15/2019.
//

#include "Template.h"
#include <fstream>

Template::~Template() = default;

void Template::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScript.ps");
}

void Template::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Template::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScript.ps");
}


