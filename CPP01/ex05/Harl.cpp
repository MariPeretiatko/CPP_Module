//
// Created by mperetia on 13.05.24.
//

#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << CYAN << "DEBUG" << RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" \
    << std::endl;
}

void Harl::info(void) {
    std::cout << GREEN << "INFO" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"\
    << std::endl;
}

void Harl::warning(void) {
    std::cout << YELLOW << "WARNING" << RESET <<std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"\
     << std::endl;
}

void Harl::error(void) {
    std::cout <<  RED << "ERROR" << RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" \
    << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*message[4])() = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error};
    std::string levels[4] = {
            "DEBUG",
            "INFO",
            "WARING",
            "ERROR"};

    for (int i = 0; i < 4 ; i++) {
        if(level == levels[i])
            (this->*message[i])();
    }
}