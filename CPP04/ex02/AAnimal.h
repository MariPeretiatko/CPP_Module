//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_AANIMAL_H
#define CPP_AANIMAL_H

#include <iostream>

#include "Colors.h"

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(std::string new_type);
    AAnimal(const AAnimal &obj);
    AAnimal &operator=(const AAnimal &obj);
    virtual	~AAnimal();

    std::string getType() const;
    virtual void makeSound() const = 0;
};


#endif //CPP_AANIMAL_H
