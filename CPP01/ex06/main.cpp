//
// Created by mperetia on 13.05.24.
//
#include "Harl.h"

void printErrorMes(std::string const &message)
{
    std::cout << RED << "Error ◉ " << RESET << message << std::endl;
    exit(EXIT_FAILURE);
}
int main(int ac, char *av[])
{
    if(ac != 2)
        printErrorMes("argv");

    std::string level = av[1];

    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
        printErrorMes("Only DEBUG INFO WARNING ERROR");

    Harl tmp;
    tmp.filterHarl(level);

    return 0;
}