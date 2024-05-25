//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.h"

class Dog : public Animal{
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();
    void makeSound() const;
};


#endif //CPP_DOG_H
