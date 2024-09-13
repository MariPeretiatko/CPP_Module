//
// Created by mperetia on 30.05.24.
//

#ifndef CPP_BRAIN_H
#define CPP_BRAIN_H

#include <iostream>
#include <cstdlib>
#include <cstdio>

#include "Colors.h"


#define COUNT_IDEAS 100

class Brain {
private:
    std::string ideas[COUNT_IDEAS];
public:
    Brain();
    Brain(const Brain &obj);
    Brain &operator =(const Brain &obj);
    ~Brain();

    std::string getRandomIdea();

};


#endif //CPP_BRAIN_H
