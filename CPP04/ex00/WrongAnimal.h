//
// Created by mperetia on 28.05.24.
//

#ifndef CPP_WRONGANIMAL_H
#define CPP_WRONGANIMAL_H

#include <iostream>

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[36m"
# define YELLOW "\033[0;33m"

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string new_type);
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator =(const WrongAnimal &obj);
    virtual ~WrongAnimal();

    std::string getType() const;

    virtual void makeSound() const;
};


#endif //CPP_WRONGANIMAL_H
