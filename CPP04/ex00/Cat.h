//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.h"

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();
    void makeSound() const;
};


#endif //CPP_CAT_H
