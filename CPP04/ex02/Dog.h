//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();
    void makeSound() const;
    void printRandomIdea() const;
};


#endif //CPP_DOG_H
