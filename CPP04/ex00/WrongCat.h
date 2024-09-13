//
// Created by mperetia on 28.05.24.
//

#ifndef CPP_WRONGCAT_H
#define CPP_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat &obj);
    ~WrongCat();
    void makeSound() const;
};


#endif //CPP_WRONGCAT_H
