//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <iostream>

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[36m"
# define YELLOW "\033[0;33m"

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(std::string new_type);
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    virtual	~Animal();

    std::string getType() const;
    virtual void makeSound() const;
};


#endif //CPP_ANIMAL_H
