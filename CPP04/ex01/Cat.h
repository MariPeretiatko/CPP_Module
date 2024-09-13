//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();
    void makeSound() const;
    void printRandomIdea() const;
};


#endif //CPP_CAT_H
