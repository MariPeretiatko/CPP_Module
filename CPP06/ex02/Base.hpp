//
// Created by mperetia on 10.12.24.
//

#pragma once

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define BRIGHT_MAGENTA "\033[95m"

class Base {
  public:
    virtual ~Base() {}
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};



