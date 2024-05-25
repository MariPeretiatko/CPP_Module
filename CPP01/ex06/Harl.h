//
// Created by mperetia on 13.05.24.
//

#ifndef CPP_HARL_H
#define CPP_HARL_H

#include <iostream>
#include <cstdlib>

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[36m"

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    ~Harl();
    void filterHarl(std::string level);
//    void complain(std::string level);

};


#endif //CPP_HARL_H
